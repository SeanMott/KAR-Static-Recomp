//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A9FE8.hpp"
#include "fn_sndAuxCallbackPrepareDelay.hpp"



void fn_801B69F0(PPC::Runtime::GCContext* context)
{
/*801B69F0 001B37F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801B69F4 001B37F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B69F8 001B37F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801B69FC 001B37FC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801B6A00 001B3800*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B6A04 001B3804*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa20, context->r3));
/*801B6A08 001B3808*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801B6A0C 001B380C*/ PPC::Runtime::ASM::beq(.L_801B6A28);
/*801B6A10 001B3810*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1690 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B6A14 001B3814*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801B6A18 001B3818*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801B6A1C 001B381C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B6A20 001B3820*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B6A24 001B3824*/ PPC::Runtime::ASM::bl(fn_801A9FE8);
RUNTIME_PPC_JUMP_LABEL(.L_801B6A28, 0x801B6A28) //this is a jump label
/*801B6A28 001B3828*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B6A2C 001B382C*/ PPC::Runtime::ASM::bl(fn_sndAuxCallbackPrepareDelay);
/*801B6A30 001B3830*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801B6A34 001B3834*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801B6A38 001B3838*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B6A3C 001B383C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801B6A40 001B3840*/ PPC::Runtime::ASM::blr();
}