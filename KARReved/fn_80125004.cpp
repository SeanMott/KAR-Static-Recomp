//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8011582C.hpp"



void fn_80125004(PPC::Runtime::GCContext* context)
{
/*80125004 00121E04*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80125008 00121E08*/ PPC::Runtime::ASM::mflr(context->r0);
/*8012500C 00121E0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80125010 00121E10*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80125014 00121E14*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80125018 00121E18*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012501C 00121E1C*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80125020 00121E20*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x338);
/*80125024 00121E24*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80125028 00121E28*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8012502C, 0x8012502C) //this is a jump label
/*8012502C 00121E2C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80125030 00121E30*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80125034 00121E34*/ PPC::Runtime::ASM::beq(.L_80125040);
/*80125038 00121E38*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*8012503C 00121E3C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80125040, 0x80125040) //this is a jump label
/*80125040 00121E40*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*80125044 00121E44*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*80125048 00121E48*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8012504C 00121E4C*/ PPC::Runtime::ASM::blt(.L_8012502C);
/*80125050 00121E50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80125054 00121E54*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80125058 00121E58*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8012505C 00121E5C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80125060 00121E60*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80125064 00121E64*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80125068 00121E68*/ PPC::Runtime::ASM::blr();
}