//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802D4B3C(PPC::Runtime::GCContext* context)
{
/*802D4B3C 002D193C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802D4B40 002D1940*/ PPC::Runtime::ASM::mflr(context->r0);
/*802D4B44 002D1944*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3778 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D4B48 002D1948*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802D4B4C 002D194C*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*802D4B50 002D1950*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D4B54 002D1954*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D4B58 002D1958*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D4B5C 002D195C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802D4B60 002D1960*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802D4B64 002D1964*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*802D4B68 002D1968*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f0, context->r3));
/*802D4B6C 002D196C*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetCurrentFrame);
/*802D4B70 002D1970*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f0, context->r31));
/*802D4B74 002D1974*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D4B78 002D1978*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*802D4B7C 002D197C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802D4B80 002D1980*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802D4B84 002D1984*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802D4B88 002D1988*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802D4B8C 002D198C*/ PPC::Runtime::ASM::blr();
}