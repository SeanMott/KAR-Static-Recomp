//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80112044.hpp"
#include "fn_8011582C.hpp"



void fn_801275B4(PPC::Runtime::GCContext* context)
{
/*801275B4 001243B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801275B8 001243B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801275BC 001243BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801275C0 001243C0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801275C4 001243C4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801275C8 001243C8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801275CC 001243CC*/ PPC::Runtime::ASM::bl(fn_80112044);
/*801275D0 001243D0*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*801275D4 001243D4*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801275D8, 0x801275D8) //this is a jump label
/*801275D8 001243D8*/ PPC::Runtime::ASM::bl(fn_80112044);
/*801275DC 001243DC*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*801275E0 001243E0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801275E4 001243E4*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r0);
/*801275E8 001243E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbd0, context->r30));
/*801275EC 001243EC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801275F0 001243F0*/ PPC::Runtime::ASM::beq(.L_801275FC);
/*801275F4 001243F4*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*801275F8 001243F8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbd0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801275FC, 0x801275FC) //this is a jump label
/*801275FC 001243FC*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*80127600 00124400*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*80127604 00124404*/ PPC::Runtime::ASM::blt(.L_801275D8);
/*80127608 00124408*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8012760C 0012440C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80127610 00124410*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80127614 00124414*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80127618 00124418*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8012761C 0012441C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80127620 00124420*/ PPC::Runtime::ASM::blr();
}