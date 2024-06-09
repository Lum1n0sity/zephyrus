#include "quirk_compiler/astnode.h"

ASTNode::ASTNode(std::string type, std::string value) : type(type), value(value), parent_(nullptr) {}

void ASTNode::add_child(ASTNode* node) {
    children.push_back(node);
}

void ASTNode::set_parent(ASTNode* parent) {
    parent_ = parent;
}

void ASTNode::set_type(const std::string& newType) {
    type = newType;
}

void ASTNode::set_value(const std::string& newValue) {
    value = newValue;
}

ASTNode* ASTNode::get_parent() const {
    return parent_;
}

std::string ASTNode::getType() const {
    return type;
}

std::string ASTNode::getValue() const {
    return value;
}

const std::vector<ASTNode*>& ASTNode::getChildren() const {
    return children;
}