//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80131254.hpp"
#include "fn_80059520.hpp"



void fn_80163FB4(PPC::Runtime::GCContext* context)
{
/*80163FB4 00160DB4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80163FB8 00160DB8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80163FBC 00160DBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80163FC0 00160DC0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80163FC4 00160DC4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80163FC8 00160DC8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80163FCC 00160DCC*/ PPC::Runtime::ASM::bl(fn_80131254);
/*80163FD0 00160DD0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804AC6A0 @ Get_MemoryOffset_HighBit);
/*80163FD4 00160DD4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80163FD8 00160DD8*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804AC6A0 @ Get_MemoryOffset_LowBit);
/*80163FDC 00160DDC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80163FE0 00160DE0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x99c);
/*80163FE4 00160DE4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80163FE8 00160DE8*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80163FEC 00160DEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80163FF0 00160DF0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80163FF4 00160DF4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80163FF8 00160DF8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80163FFC 00160DFC*/ PPC::Runtime::ASM::blr();
}