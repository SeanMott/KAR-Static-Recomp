//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8011582C.hpp"



void fn_8011B1C4(PPC::Runtime::GCContext* context)
{
/*8011B1C4 00117FC4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8011B1C8 00117FC8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011B1CC 00117FCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8011B1D0 00117FD0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8011B1D4 00117FD4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8011B1D8 00117FD8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011B1DC 00117FDC*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8011B1E0 00117FE0*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x21c);
/*8011B1E4 00117FE4*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8011B1E8 00117FE8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8011B1EC, 0x8011B1EC) //this is a jump label
/*8011B1EC 00117FEC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8011B1F0 00117FF0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8011B1F4 00117FF4*/ PPC::Runtime::ASM::beq(.L_8011B200);
/*8011B1F8 00117FF8*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*8011B1FC 00117FFC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8011B200, 0x8011B200) //this is a jump label
/*8011B200 00118000*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8011B204 00118004*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*8011B208 00118008*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*8011B20C 0011800C*/ PPC::Runtime::ASM::blt(.L_8011B1EC);
/*8011B210 00118010*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8011B214 00118014*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8011B218 00118018*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8011B21C 0011801C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011B220 00118020*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8011B224 00118024*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8011B228 00118028*/ PPC::Runtime::ASM::blr();
}