//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005523C.hpp"
#include "fn_8005523C.hpp"



void fn_800DB7D0(PPC::Runtime::GCContext* context)
{
/*800DB7D0 000D85D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800DB7D4 000D85D4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800DB7D8 000D85D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800DB7DC 000D85DC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800DB7E0 000D85E0*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*800DB7E4 000D85E4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800DB7E8 000D85E8*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*800DB7EC 000D85EC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800DB7F0 000D85F0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800DB7F4 000D85F4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjRemoveAnimAll);
/*800DB7F8 000D85F8*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x1);
/*800DB7FC 000D85FC*/ PPC::Runtime::ASM::bne(.L_800DB820);
/*800DB800 000D8600*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*800DB804 000D8604*/ PPC::Runtime::ASM::bne(.L_800DB810);
/*800DB808 000D8608*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800DB80C 000D860C*/ PPC::Runtime::ASM::b(.L_800DB814);
RUNTIME_PPC_JUMP_LABEL(.L_800DB810, 0x800DB810) //this is a jump label
/*800DB810 000D8610*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_800DB814, 0x800DB814) //this is a jump label
/*800DB814 000D8614*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800DB818 000D8618*/ PPC::Runtime::ASM::bl(fn_8005523C);
/*800DB81C 000D861C*/ PPC::Runtime::ASM::b(.L_800DB834);
RUNTIME_PPC_JUMP_LABEL(.L_800DB820, 0x800DB820) //this is a jump label
/*800DB820 000D8620*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x2);
/*800DB824 000D8624*/ PPC::Runtime::ASM::bne(.L_800DB834);
/*800DB828 000D8628*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800DB82C 000D862C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*800DB830 000D8630*/ PPC::Runtime::ASM::bl(fn_8005523C);
RUNTIME_PPC_JUMP_LABEL(.L_800DB834, 0x800DB834) //this is a jump label
/*800DB834 000D8634*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800DB838 000D8638*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800DB83C 000D863C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800DB840 000D8640*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800DB844 000D8644*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800DB848 000D8648*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800DB84C 000D864C*/ PPC::Runtime::ASM::blr();
}