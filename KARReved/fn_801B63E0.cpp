//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B65F8.hpp"



void fn_801B63E0(PPC::Runtime::GCContext* context)
{
/*801B63E0 001B31E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B63E4 001B31E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B63E8 001B31E8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E167C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B63EC 001B31EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B63F0 001B31F0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r3));
/*801B63F4 001B31F4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa20, context->r3));
/*801B63F8 001B31F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2ec, context->r4));
/*801B63FC 001B31FC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*801B6400 001B3200*/ PPC::Runtime::ASM::fcmpu(cr0, context->f2, context->f0);
/*801B6404 001B3204*/ PPC::Runtime::ASM::beq(.L_801B6410);
/*801B6408 001B3208*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f1);
/*801B640C 001B320C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa20, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_801B6410, 0x801B6410) //this is a jump label
/*801B6410 001B3210*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r3));
/*801B6414 001B3214*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa20, context->r3));
/*801B6418 001B3218*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e8, context->r4));
/*801B641C 001B321C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801B6420 001B3220*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*801B6424 001B3224*/ PPC::Runtime::ASM::bne(.L_801B6430);
/*801B6428 001B3228*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1678 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B642C 001B322C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa20, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_801B6430, 0x801B6430) //this is a jump label
/*801B6430 001B3230*/ PPC::Runtime::ASM::bl(fn_801B65F8);
/*801B6434 001B3234*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801B6438 001B3238*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B643C 001B323C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B6440 001B3240*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B6444 001B3244*/ PPC::Runtime::ASM::blr();
}