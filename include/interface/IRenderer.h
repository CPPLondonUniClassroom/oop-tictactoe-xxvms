#pragma once

#include <vector>

class IRenderer {
public:
    virtual void RenderBoard(const std::vector<char>& cells) = 0;
};

/*
Renderer

If you're on Pro difficulty. No help for you on this one, you should know what you're doing.
 */