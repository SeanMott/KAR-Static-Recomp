//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_GXInitTexObj.hpp"



void fn_GXInitTexObjCI(PPC::Runtime::GCContext* context)
{
/*803CDA48 003CA848*/ PPC::Runtime::ASM::mflr(context->r0);
/*803CDA4C 003CA84C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803CDA50 003CA850*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*803CDA54 003CA854*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803CDA58 003CA858*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*803CDA5C 003CA85C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803CDA60 003CA860*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803CDA64 003CA864*/ PPC::Runtime::ASM::bl(fn_GXInitTexObj);
/*803CDA68 003CA868*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f, context->r30));
/*803CDA6C 003CA86C*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 31, 29);
/*803CDA70 003CA870*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f, context->r30));
/*803CDA74 003CA874*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*803CDA78 003CA878*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803CDA7C 003CA87C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803CDA80 003CA880*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803CDA84 003CA884*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*803CDA88 003CA888*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803CDA8C 003CA88C*/ PPC::Runtime::ASM::blr();
}