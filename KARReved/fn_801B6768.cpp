//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B6284.hpp"



void fn_801B6768(PPC::Runtime::GCContext* context)
{
/*801B6768 001B3568*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B676C 001B356C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B6770 001B3570*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E168C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B6774 001B3574*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B6778 001B3578*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r3));
/*801B677C 001B357C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa20, context->r3));
/*801B6780 001B3580*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2ec, context->r4));
/*801B6784 001B3584*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*801B6788 001B3588*/ PPC::Runtime::ASM::fcmpu(cr0, context->f2, context->f0);
/*801B678C 001B358C*/ PPC::Runtime::ASM::beq(.L_801B6798);
/*801B6790 001B3590*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f1);
/*801B6794 001B3594*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa20, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_801B6798, 0x801B6798) //this is a jump label
/*801B6798 001B3598*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r3));
/*801B679C 001B359C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa20, context->r3));
/*801B67A0 001B35A0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e8, context->r4));
/*801B67A4 001B35A4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801B67A8 001B35A8*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*801B67AC 001B35AC*/ PPC::Runtime::ASM::bne(.L_801B67B8);
/*801B67B0 001B35B0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1688 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B67B4 001B35B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa20, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_801B67B8, 0x801B67B8) //this is a jump label
/*801B67B8 001B35B8*/ PPC::Runtime::ASM::bl(fn_801B6284);
/*801B67BC 001B35BC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801B67C0 001B35C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B67C4 001B35C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B67C8 001B35C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B67CC 001B35CC*/ PPC::Runtime::ASM::blr();
}