//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80429E5C(PPC::Runtime::GCContext* context)
{
/*80429E5C 00426C5C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80429E60 00426C60*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80429E64 00426C64*/ PPC::Runtime::ASM::b(.L_80429E78);
RUNTIME_PPC_JUMP_LABEL(.L_80429E68, 0x80429E68) //this is a jump label
/*80429E68 00426C68*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r4));
/*80429E6C 00426C6C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*80429E70 00426C70*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r4));
/*80429E74 00426C74*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_80429E78, 0x80429E78) //this is a jump label
/*80429E78 00426C78*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80429E7C 00426C7C*/ PPC::Runtime::ASM::bne(.L_80429E68);
/*80429E80 00426C80*/ PPC::Runtime::ASM::blr();
}