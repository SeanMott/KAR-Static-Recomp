//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138B10.hpp"



void fn_801696AC(PPC::Runtime::GCContext* context)
{
/*801696AC 001664AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801696B0 001664B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801696B4 001664B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801696B8 001664B8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801696BC 001664BC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801696C0 001664C0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801696C4 001664C4*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*801696C8 001664C8*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0xa80);
/*801696CC 001664CC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801696D0 001664D0*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*801696D4 001664D4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801696D8 001664D8*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*801696DC 001664DC*/ PPC::Runtime::ASM::beq(.L_80169708);
/*801696E0 001664E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r5));
/*801696E4 001664E4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801696E8 001664E8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
/*801696EC 001664EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r5));
/*801696F0 001664F0*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801696F4 001664F4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801696F8 001664F8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801696FC 001664FC*/ PPC::Runtime::ASM::slwi(context->r4, context->r0, 1);
/*80169700 00166500*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80169704 00166504*/ PPC::Runtime::ASM::bl(fn_80138B10);
RUNTIME_PPC_JUMP_LABEL(.L_80169708, 0x80169708) //this is a jump label
/*80169708 00166508*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016970C 0016650C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80169710 00166510*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80169714 00166514*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80169718 00166518*/ PPC::Runtime::ASM::blr();
}