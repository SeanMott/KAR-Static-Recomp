//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80294CB0(PPC::Runtime::GCContext* context)
{
/*80294CB0 00291AB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80294CB4 00291AB4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80294CB8 00291AB8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80294CBC 00291ABC*/ PPC::Runtime::ASM::bne(.L_80294CD8);
/*80294CC0 00291AC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80294CC4 00291AC4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80294CC8 00291AC8*/ PPC::Runtime::ASM::bne(.L_80294CD8);
/*80294CCC 00291ACC*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDA70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294CD0 00291AD0*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*80294CD4 00291AD4*/ PPC::Runtime::ASM::bne(.L_80294CDC);
RUNTIME_PPC_JUMP_LABEL(.L_80294CD8, 0x80294CD8) //this is a jump label
/*80294CD8 00291AD8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80294CDC, 0x80294CDC) //this is a jump label
/*80294CDC 00291ADC*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*80294CE0 00291AE0*/ PPC::Runtime::ASM::blr();
}