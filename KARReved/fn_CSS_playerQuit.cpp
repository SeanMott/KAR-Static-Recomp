//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_CSS_playerQuit(PPC::Runtime::GCContext* context)
{
/*800616C8 0005E4C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800616CC 0005E4CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800616D0 0005E4D0*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*800616D4 0005E4D4*/ PPC::Runtime::ASM::li(context->r4, 0xff);
/*800616D8 0005E4D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800616DC 0005E4DC*/ PPC::Runtime::ASM::li(context->r5, 0x7f);
/*800616E0 0005E4E0*/ PPC::Runtime::ASM::li(context->r6, 0x5);
/*800616E4 0005E4E4*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*800616E8 0005E4E8*/ PPC::Runtime::ASM::bl(fn_playSoundFX);
/*800616EC 0005E4EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800616F0 0005E4F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800616F4 0005E4F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800616F8 0005E4F8*/ PPC::Runtime::ASM::blr();
}