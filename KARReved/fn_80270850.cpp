//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80275FCC.hpp"
#include "fn_80276050.hpp"
#include "fn_80276050.hpp"



void fn_80270850(PPC::Runtime::GCContext* context)
{
/*80270850 0026D650*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80270854 0026D654*/ PPC::Runtime::ASM::mflr(context->r0);
/*80270858 0026D658*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8027085C 0026D65C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80270860 0026D660*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80270864 0026D664*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80270868 0026D668*/ PPC::Runtime::ASM::bl(fn_80275FCC);
/*8027086C 0026D66C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80270870 0026D670*/ PPC::Runtime::ASM::li(context->r4, 0x80);
/*80270874 0026D674*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80270878 0026D678*/ PPC::Runtime::ASM::bl(fn_80276050);
/*8027087C 0026D67C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80270880 0026D680*/ PPC::Runtime::ASM::li(context->r4, 0x81);
/*80270884 0026D684*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80270888 0026D688*/ PPC::Runtime::ASM::bl(fn_80276050);
/*8027088C 0026D68C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80270890 0026D690*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80270894 0026D694*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80270898 0026D698*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8027089C 0026D69C*/ PPC::Runtime::ASM::blr();
}