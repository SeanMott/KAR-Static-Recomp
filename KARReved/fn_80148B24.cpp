//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138BA4.hpp"



void fn_80148B24(PPC::Runtime::GCContext* context)
{
/*80148B24 00145924*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80148B28 00145928*/ PPC::Runtime::ASM::mflr(context->r0);
/*80148B2C 0014592C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80148B30 00145930*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80148B34 00145934*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80148B38 00145938*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80148B3C 0014593C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80148B40 00145940*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80148B44 00145944*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*80148B48 00145948*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80148B4C 0014594C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x18);
/*80148B50 00145950*/ PPC::Runtime::ASM::li(context->r31, 0x2);
/*80148B54 00145954*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r0);
/*80148B58 00145958*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x320);
RUNTIME_PPC_JUMP_LABEL(.L_80148B5C, 0x80148B5C) //this is a jump label
/*80148B5C 0014595C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80148B60 00145960*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80148B64 00145964*/ PPC::Runtime::ASM::beq(.L_80148BA0);
/*80148B68 00145968*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80148B6C 0014596C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80148B70 00145970*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80148B74 00145974*/ PPC::Runtime::ASM::beq(.L_80148BA0);
/*80148B78 00145978*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80148B7C 0014597C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0528 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80148B80 00145980*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
/*80148B84 00145984*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80148B88 00145988*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80148B8C 0014598C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80148B90 00145990*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x3);
/*80148B94 00145994*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*80148B98 00145998*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*80148B9C 0014599C*/ PPC::Runtime::ASM::bl(fn_80138BA4);
RUNTIME_PPC_JUMP_LABEL(.L_80148BA0, 0x80148BA0) //this is a jump label
/*80148BA0 001459A0*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*80148BA4 001459A4*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*80148BA8 001459A8*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x6);
/*80148BAC 001459AC*/ PPC::Runtime::ASM::blt(.L_80148B5C);
/*80148BB0 001459B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80148BB4 001459B4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80148BB8 001459B8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80148BBC 001459BC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80148BC0 001459C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80148BC4 001459C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80148BC8 001459C8*/ PPC::Runtime::ASM::blr();
}