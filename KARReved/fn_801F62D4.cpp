//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CC2A4.hpp"



void fn_801F62D4(PPC::Runtime::GCContext* context)
{
/*801F62D4 001F30D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801F62D8 001F30D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F62DC 001F30DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801F62E0 001F30E0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801F62E4 001F30E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801F62E8 001F30E8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801F62EC 001F30EC*/ PPC::Runtime::ASM::bl(fn_801CC2A4);
/*801F62F0 001F30F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r31));
/*801F62F4 001F30F4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801F62F8 001F30F8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r3));
/*801F62FC 001F30FC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x318, context->r31));
/*801F6300 001F3100*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*801F6304 001F3104*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x318, context->r31));
/*801F6308 001F3108*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F630C 001F310C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r31));
/*801F6310 001F3110*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*801F6314 001F3114*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r31));
/*801F6318 001F3118*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801F631C 001F311C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x320, context->r31));
/*801F6320 001F3120*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*801F6324 001F3124*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x320, context->r31));
/*801F6328 001F3128*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801F632C 001F312C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801F6330 001F3130*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F6334 001F3134*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801F6338 001F3138*/ PPC::Runtime::ASM::blr();
}