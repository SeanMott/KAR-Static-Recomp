//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80448220(PPC::Runtime::GCContext* context)
{
/*80448220 00445020*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80448224 00445024*/ PPC::Runtime::ASM::mflr(context->r0);
/*80448228 00445028*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8044822C 0044502C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80448230 00445030*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80448234 00445034*/ PPC::Runtime::ASM::b(.L_80448244);
RUNTIME_PPC_JUMP_LABEL(.L_80448238, 0x80448238) //this is a jump label
/*80448238 00445038*/ PPC::Runtime::ASM::mr(context->r12, context->r31);
/*8044823C 0044503C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80448240 00445040*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80448244, 0x80448244) //this is a jump label
/*80448244 00445044*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE4F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80448248 00445048*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8044824C 0044504C*/ PPC::Runtime::ASM::bne(.L_80448238);
/*80448250 00445050*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80448254 00445054*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80448258 00445058*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8044825C 0044505C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80448260 00445060*/ PPC::Runtime::ASM::blr();
}