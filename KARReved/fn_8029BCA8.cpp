//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029BCA8(PPC::Runtime::GCContext* context)
{
/*8029BCA8 00298AA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8029BCAC 00298AAC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8029BCB0 00298AB0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8029BCB4 00298AB4*/ PPC::Runtime::ASM::bne(.L_8029BCD0);
/*8029BCB8 00298AB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8029BCBC 00298ABC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8029BCC0 00298AC0*/ PPC::Runtime::ASM::bne(.L_8029BCD0);
/*8029BCC4 00298AC4*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD9F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029BCC8 00298AC8*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*8029BCCC 00298ACC*/ PPC::Runtime::ASM::bne(.L_8029BCD4);
RUNTIME_PPC_JUMP_LABEL(.L_8029BCD0, 0x8029BCD0) //this is a jump label
/*8029BCD0 00298AD0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8029BCD4, 0x8029BCD4) //this is a jump label
/*8029BCD4 00298AD4*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8029BCD8 00298AD8*/ PPC::Runtime::ASM::blr();
}