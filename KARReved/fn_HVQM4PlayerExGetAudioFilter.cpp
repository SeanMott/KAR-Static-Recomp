//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HVQM4PlayerExGetAudioFilter(PPC::Runtime::GCContext* context)
{
/*80077FF4 00074DF4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80077FF8 00074DF8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80077FFC 00074DFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80078000 00074E00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80078004 00074E04*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80078008 00074E08*/ PPC::Runtime::ASM::beq(.L_80078014);
/*8007800C 00074E0C*/ PPC::Runtime::ASM::bl(fn_8045F714);
/*80078010 00074E10*/ PPC::Runtime::ASM::b(.L_80078018);
RUNTIME_PPC_JUMP_LABEL(.L_80078014, 0x80078014) //this is a jump label
/*80078014 00074E14*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80078018, 0x80078018) //this is a jump label
/*80078018 00074E18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007801C 00074E1C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80078020 00074E20*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80078024 00074E24*/ PPC::Runtime::ASM::blr();
}