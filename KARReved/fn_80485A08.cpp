//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_MD5Init.hpp"
#include "fn_MD5Update.hpp"
#include "fn_MD5Update.hpp"
#include "fn_MD5Final.hpp"



void fn_80485A08(PPC::Runtime::GCContext* context)
{
/*80485A08 00482808*/ PPC::Runtime::ASM::mflr(context->r0);
/*80485A0C 0048280C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80485A10 00482810*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*80485A14 00482814*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*80485A18 00482818*/ PPC::Runtime::ASM::addi(context->r31, context->r6, 0x0);
/*80485A1C 0048281C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*80485A20 00482820*/ PPC::Runtime::ASM::addi(context->r30, context->r5, 0x0);
/*80485A24 00482824*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*80485A28 00482828*/ PPC::Runtime::ASM::addi(context->r29, context->r4, 0x0);
/*80485A2C 0048282C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*80485A30 00482830*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x0);
/*80485A34 00482834*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x18);
/*80485A38 00482838*/ PPC::Runtime::ASM::bl(fn_MD5Init);
/*80485A3C 0048283C*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x0);
/*80485A40 00482840*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x18);
/*80485A44 00482844*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*80485A48 00482848*/ PPC::Runtime::ASM::bl(fn_MD5Update);
/*80485A4C 0048284C*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x0);
/*80485A50 00482850*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x0);
/*80485A54 00482854*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x18);
/*80485A58 00482858*/ PPC::Runtime::ASM::bl(fn_MD5Update);
/*80485A5C 0048285C*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x0);
/*80485A60 00482860*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x18);
/*80485A64 00482864*/ PPC::Runtime::ASM::bl(fn_MD5Final);
/*80485A68 00482868*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r28));
/*80485A6C 0048286C*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 20, 15);
/*80485A70 00482870*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r28));
/*80485A74 00482874*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r28));
/*80485A78 00482878*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x3000);
/*80485A7C 0048287C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r28));
/*80485A80 00482880*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80485A84 00482884*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 26, 23);
/*80485A88 00482888*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80485A8C 0048288C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80485A90 00482890*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x80);
/*80485A94 00482894*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80485A98 00482898*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*80485A9C 0048289C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*80485AA0 004828A0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*80485AA4 004828A4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*80485AA8 004828A8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*80485AAC 004828AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*80485AB0 004828B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80485AB4 004828B4*/ PPC::Runtime::ASM::blr();
}