//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_ActionStateChange.hpp"
#include "fn_8019FE48.hpp"
#include "fn_801BE1C0.hpp"
#include "fn_801BE1DC.hpp"



void fn_801BF6A4(PPC::Runtime::GCContext* context)
{
/*801BF6A4 001BC4A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BF6A8 001BC4A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BF6AC 001BC4AC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1888 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BF6B0 001BC4B0*/ PPC::Runtime::ASM::li(context->r4, 0x24);
/*801BF6B4 001BC4B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF6B8 001BC4B8*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801BF6BC 001BC4BC*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801BF6C0 001BC4C0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E188C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BF6C4 001BC4C4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BF6C8 001BC4C8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801BF6CC 001BC4CC*/ PPC::Runtime::ASM::li(context->r6, 0x40);
/*801BF6D0 001BC4D0*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801BF6D4 001BC4D4*/ PPC::Runtime::ASM::li(context->r0, 0x9);
/*801BF6D8 001BC4D8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BF6DC 001BC4DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x464, context->r31));
/*801BF6E0 001BC4E0*/ PPC::Runtime::ASM::bl(fn_8019FE48);
/*801BF6E4 001BC4E4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BF6E8 001BC4E8*/ PPC::Runtime::ASM::bl(fn_801BE1C0);
/*801BF6EC 001BC4EC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BF6F0 001BC4F0*/ PPC::Runtime::ASM::bl(fn_801BE1DC);
/*801BF6F4 001BC4F4*/ PPC::Runtime::ASM::li(context->r0, 0xfe);
/*801BF6F8 001BC4F8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa41, context->r31));
/*801BF6FC 001BC4FC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa40, context->r31));
/*801BF700 001BC500*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BF704 001BC504*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF708 001BC508*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BF70C 001BC50C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BF710 001BC510*/ PPC::Runtime::ASM::blr();
}