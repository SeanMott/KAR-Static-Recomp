//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800D790C(PPC::Runtime::GCContext* context)
{
/*800D790C 000D470C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800D7910 000D4710*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D7914 000D4714*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0x140);
/*800D7918 000D4718*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D791C 000D471C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*800D7920 000D4720*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0xe0);
/*800D7924 000D4724*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*800D7928 000D4728*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*800D792C 000D472C*/ PPC::Runtime::ASM::bl(fn_HSD_MtxGetTranslate);
/*800D7930 000D4730*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D7934 000D4734*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D7938 000D4738*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800D793C 000D473C*/ PPC::Runtime::ASM::blr();
}