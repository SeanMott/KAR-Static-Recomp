//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A00F4.hpp"
#include "fn_801BED04.hpp"
#include "fn_ground_Spin.hpp"
#include "fn_801C05A8.hpp"



void fn_801C0018(PPC::Runtime::GCContext* context)
{
/*801C0018 001BCE18*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C001C 001BCE1C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C0020 001BCE20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0024 001BCE24*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C0028 001BCE28*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C002C 001BCE2C*/ PPC::Runtime::ASM::bl(fn_801A00F4);
/*801C0030 001BCE30*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C0034 001BCE34*/ PPC::Runtime::ASM::bl(fn_801BED04);
/*801C0038 001BCE38*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C003C 001BCE3C*/ PPC::Runtime::ASM::bne(.L_801C0054);
/*801C0040 001BCE40*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C0044 001BCE44*/ PPC::Runtime::ASM::bl(fn_ground_Spin);
/*801C0048 001BCE48*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C004C 001BCE4C*/ PPC::Runtime::ASM::bl(fn_801C05A8);
/*801C0050 001BCE50*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801C0054, 0x801C0054) //this is a jump label
/*801C0054 001BCE54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0058 001BCE58*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C005C 001BCE5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C0060 001BCE60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C0064 001BCE64*/ PPC::Runtime::ASM::blr();
}