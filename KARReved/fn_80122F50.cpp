//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80112044.hpp"
#include "fn_8011582C.hpp"



void fn_80122F50(PPC::Runtime::GCContext* context)
{
/*80122F50 0011FD50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80122F54 0011FD54*/ PPC::Runtime::ASM::mflr(context->r0);
/*80122F58 0011FD58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80122F5C 0011FD5C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80122F60 0011FD60*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80122F64 0011FD64*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80122F68 0011FD68*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80122F6C 0011FD6C*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80122F70 0011FD70*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80122F74 0011FD74*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80122F78 0011FD78*/ PPC::Runtime::ASM::mr(context->r31, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_80122F7C, 0x80122F7C) //this is a jump label
/*80122F7C 0011FD7C*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80122F80 0011FD80*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r29);
/*80122F84 0011FD84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x57c, context->r30));
/*80122F88 0011FD88*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80122F8C 0011FD8C*/ PPC::Runtime::ASM::beq(.L_80122F98);
/*80122F90 0011FD90*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*80122F94 0011FD94*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x57c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80122F98, 0x80122F98) //this is a jump label
/*80122F98 0011FD98*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*80122F9C 0011FD9C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*80122FA0 0011FDA0*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x4);
/*80122FA4 0011FDA4*/ PPC::Runtime::ASM::blt(.L_80122F7C);
/*80122FA8 0011FDA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80122FAC 0011FDAC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80122FB0 0011FDB0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80122FB4 0011FDB4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80122FB8 0011FDB8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80122FBC 0011FDBC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80122FC0 0011FDC0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80122FC4 0011FDC4*/ PPC::Runtime::ASM::blr();
}