//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80295020(PPC::Runtime::GCContext* context)
{
/*80295020 00291E20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80295024 00291E24*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80295028 00291E28*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8029502C 00291E2C*/ PPC::Runtime::ASM::bne(.L_80295048);
/*80295030 00291E30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80295034 00291E34*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80295038 00291E38*/ PPC::Runtime::ASM::bne(.L_80295048);
/*8029503C 00291E3C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDA88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295040 00291E40*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*80295044 00291E44*/ PPC::Runtime::ASM::bne(.L_8029504C);
RUNTIME_PPC_JUMP_LABEL(.L_80295048, 0x80295048) //this is a jump label
/*80295048 00291E48*/ PPC::Runtime::ASM::li(context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8029504C, 0x8029504C) //this is a jump label
/*8029504C 00291E4C*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*80295050 00291E50*/ PPC::Runtime::ASM::blr();
}