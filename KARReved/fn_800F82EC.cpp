//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_stGetStageKind_3Cyakumono?.hpp"
#include "fn_80072C90.hpp"



void fn_800F82EC(PPC::Runtime::GCContext* context)
{
/*800F82EC 000F50EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F82F0 000F50F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F82F4 000F50F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F82F8 000F50F8*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_3Cyakumono?);
/*800F82FC 000F50FC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800F8300 000F5100*/ PPC::Runtime::ASM::beq(.L_800F8334);
/*800F8304 000F5104*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800F8308 000F5108*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_993 @ Get_MemoryOffset_HighBit);
/*800F830C 000F510C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800F8310 000F5110*/ PPC::Runtime::ASM::addi(context->r4, context->r3, MemoryOffset_993 @ Get_MemoryOffset_LowBit);
/*800F8314 000F5114*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*800F8318 000F5118*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*800F831C 000F511C*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*800F8320 000F5120*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800F8324 000F5124*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*800F8328 000F5128*/ PPC::Runtime::ASM::li(context->r9, 0x8);
/*800F832C 000F512C*/ PPC::Runtime::ASM::li(context->r10, 0x10);
/*800F8330 000F5130*/ PPC::Runtime::ASM::bl(fn_80072C90);
RUNTIME_PPC_JUMP_LABEL(.L_800F8334, 0x800F8334) //this is a jump label
/*800F8334 000F5134*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F8338 000F5138*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F833C 000F513C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F8340 000F5140*/ PPC::Runtime::ASM::blr();
}