//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_ActionStateChange.hpp"
#include "fn_8019FE48.hpp"



void fn_801C3084(PPC::Runtime::GCContext* context)
{
/*801C3084 001BFE84*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C3088 001BFE88*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C308C 001BFE8C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1960 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C3090 001BFE90*/ PPC::Runtime::ASM::li(context->r4, 0x23);
/*801C3094 001BFE94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3098 001BFE98*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801C309C 001BFE9C*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801C30A0 001BFEA0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1964 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C30A4 001BFEA4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C30A8 001BFEA8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C30AC 001BFEAC*/ PPC::Runtime::ASM::li(context->r6, 0x40);
/*801C30B0 001BFEB0*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801C30B4 001BFEB4*/ PPC::Runtime::ASM::li(context->r0, 0x9);
/*801C30B8 001BFEB8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C30BC 001BFEBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x464, context->r31));
/*801C30C0 001BFEC0*/ PPC::Runtime::ASM::bl(fn_8019FE48);
/*801C30C4 001BFEC4*/ PPC::Runtime::ASM::li(context->r0, 0xfe);
/*801C30C8 001BFEC8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa41, context->r31));
/*801C30CC 001BFECC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa40, context->r31));
/*801C30D0 001BFED0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C30D4 001BFED4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C30D8 001BFED8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C30DC 001BFEDC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C30E0 001BFEE0*/ PPC::Runtime::ASM::blr();
}