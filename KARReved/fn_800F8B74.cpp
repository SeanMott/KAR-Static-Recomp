//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800F8B74(PPC::Runtime::GCContext* context)
{
/*800F8B74 000F5974*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800F8B78 000F5978*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800F8B7C 000F597C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800F8B80 000F5980*/ PPC::Runtime::ASM::mtctr(context->r0);
/*800F8B84 000F5984*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800F8B88 000F5988*/ PPC::Runtime::ASM::ble(.L_800F8BBC);
RUNTIME_PPC_JUMP_LABEL(.L_800F8B8C, 0x800F8B8C) //this is a jump label
/*800F8B8C 000F598C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800F8B90 000F5990*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x8);
/*800F8B94 000F5994*/ PPC::Runtime::ASM::lwzx(context->r0, context->r6, context->r0);
/*800F8B98 000F5998*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*800F8B9C 000F599C*/ PPC::Runtime::ASM::bne(.L_800F8BB0);
/*800F8BA0 000F59A0*/ PPC::Runtime::ASM::mulli(context->r0, context->r7, 0xc);
/*800F8BA4 000F59A4*/ PPC::Runtime::ASM::add(context->r3, context->r6, context->r0);
/*800F8BA8 000F59A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800F8BAC 000F59AC*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800F8BB0, 0x800F8BB0) //this is a jump label
/*800F8BB0 000F59B0*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0xc);
/*800F8BB4 000F59B4*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*800F8BB8 000F59B8*/ PPC::Runtime::ASM::bdnz(.L_800F8B8C);
RUNTIME_PPC_JUMP_LABEL(.L_800F8BBC, 0x800F8BBC) //this is a jump label
/*800F8BBC 000F59BC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800F8BC0 000F59C0*/ PPC::Runtime::ASM::blr();
}