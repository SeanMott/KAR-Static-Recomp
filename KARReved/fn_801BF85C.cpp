//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_ActionStateChange.hpp"



void fn_801BF85C(PPC::Runtime::GCContext* context)
{
/*801BF85C 001BC65C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BF860 001BC660*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BF864 001BC664*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1890 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BF868 001BC668*/ PPC::Runtime::ASM::li(context->r4, 0x25);
/*801BF86C 001BC66C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF870 001BC670*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801BF874 001BC674*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801BF878 001BC678*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1894 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BF87C 001BC67C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BF880 001BC680*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801BF884 001BC684*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801BF888 001BC688*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801BF88C 001BC68C*/ PPC::Runtime::ASM::li(context->r0, 0xfe);
/*801BF890 001BC690*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa41, context->r31));
/*801BF894 001BC694*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa40, context->r31));
/*801BF898 001BC698*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BF89C 001BC69C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF8A0 001BC6A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BF8A4 001BC6A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BF8A8 001BC6A8*/ PPC::Runtime::ASM::blr();
}