//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029481C(PPC::Runtime::GCContext* context)
{
/*8029481C 0029161C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDA40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294820 00291620*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80294824 00291624*/ PPC::Runtime::ASM::beq(.L_8029483C);
/*80294828 00291628*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8029482C 0029162C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDA40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294830 00291630*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80294834 00291634*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294838 00291638*/ PPC::Runtime::ASM::b(.L_80294844);
RUNTIME_PPC_JUMP_LABEL(.L_8029483C, 0x8029483C) //this is a jump label
/*8029483C 0029163C*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294840 00291640*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80294844, 0x80294844) //this is a jump label
/*80294844 00291644*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDA3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294848 00291648*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8029484C 0029164C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDA3C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294850 00291650*/ PPC::Runtime::ASM::blr();
}