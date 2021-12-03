#define CROW_MAIN
#define CROW_ENABLE_LOGGING
#define CROW_ENABLE_SSL
#include "../../include/server/server.hpp"


Server::Server(){};

void Server::Start(int port) {
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")
    .methods("GET"_method)
    ([]{
        json x = {
            {"test", "test"}
        };
        return crow::response(x.dump());
    });

    app.loglevel(crow::LogLevel::INFO);
    app.port(port)
        .multithreaded()
        .run();
};