//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80052C58(PPC::Runtime::GCContext* context)
{
/*80052C58 0004FA58*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80052C5C 0004FA5C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80052C60 0004FA60*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80052C64 0004FA64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80052C68 0004FA68*/ PPC::Runtime::ASM::beq(.L_80052C74);
/*80052C6C 0004FA6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80052C70 0004FA70*/ PPC::Runtime::ASM::b(.L_80052C78);
RUNTIME_PPC_JUMP_LABEL(.L_80052C74, 0x80052C74) //this is a jump label
/*80052C74 0004FA74*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80052C78, 0x80052C78) //this is a jump label
/*80052C78 0004FA78*/ PPC::Runtime::ASM::bl(fn_HSD_MObjSetFlags);
/*80052C7C 0004FA7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80052C80 0004FA80*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80052C84 0004FA84*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80052C88 0004FA88*/ PPC::Runtime::ASM::blr();
}