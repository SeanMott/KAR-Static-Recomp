//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801CF378.hpp"



void fn_801E3DFC(PPC::Runtime::GCContext* context)
{
/*801E3DFC 001E0BFC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801E3E00 001E0C00*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E3E04 001E0C04*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1DB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E3E08 001E0C08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E3E0C 001E0C0C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1DAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E3E10 001E0C10*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E3E14 001E0C14*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801E3E18 001E0C18*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c4, context->r3));
/*801E3E1C 001E0C1C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*801E3E20 001E0C20*/ PPC::Runtime::ASM::fmadds(context->f1, context->f1, context->f0, context->f2);
/*801E3E24 001E0C24*/ PPC::Runtime::ASM::bl(fn_801CF378);
/*801E3E28 001E0C28*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*801E3E2C 001E0C2C*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/*801E3E30 001E0C30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb24, context->r31));
/*801E3E34 001E0C34*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E3E38 001E0C38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E3E3C 001E0C3C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E3E40 001E0C40*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801E3E44 001E0C44*/ PPC::Runtime::ASM::blr();
}