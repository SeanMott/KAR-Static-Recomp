//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8011582C.hpp"



void fn_80131178(PPC::Runtime::GCContext* context)
{
/*80131178 0012DF78*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8013117C 0012DF7C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80131180 0012DF80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80131184 0012DF84*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80131188 0012DF88*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8013118C 0012DF8C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80131190 0012DF90*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80131194 0012DF94*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0xc4c);
/*80131198 0012DF98*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8013119C 0012DF9C*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801311A0, 0x801311A0) //this is a jump label
/*801311A0 0012DFA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*801311A4 0012DFA4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801311A8 0012DFA8*/ PPC::Runtime::ASM::beq(.L_801311B4);
/*801311AC 0012DFAC*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*801311B0 0012DFB0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801311B4, 0x801311B4) //this is a jump label
/*801311B4 0012DFB4*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*801311B8 0012DFB8*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*801311BC 0012DFBC*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*801311C0 0012DFC0*/ PPC::Runtime::ASM::blt(.L_801311A0);
/*801311C4 0012DFC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801311C8 0012DFC8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801311CC 0012DFCC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801311D0 0012DFD0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801311D4 0012DFD4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801311D8 0012DFD8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801311DC 0012DFDC*/ PPC::Runtime::ASM::blr();
}