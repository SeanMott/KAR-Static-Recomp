//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8011582C.hpp"



void fn_8011DAA8(PPC::Runtime::GCContext* context)
{
/*8011DAA8 0011A8A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8011DAAC 0011A8AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011DAB0 0011A8B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8011DAB4 0011A8B4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8011DAB8 0011A8B8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8011DABC 0011A8BC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011DAC0 0011A8C0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8011DAC4 0011A8C4*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8011DAC8 0011A8C8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8011DACC 0011A8CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30c, context->r3));
/*8011DAD0 0011A8D0*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8011DAD4 0011A8D4*/ PPC::Runtime::ASM::beq(.L_8011DB1C);
/*8011DAD8 0011A8D8*/ PPC::Runtime::ASM::lis(context->r3, lbl_805586FC @ Get_MemoryOffset_HighBit);
/*8011DADC 0011A8DC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*8011DAE0 0011A8E0*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_805586FC @ Get_MemoryOffset_LowBit);
/*8011DAE4 0011A8E4*/ PPC::Runtime::ASM::li(context->r28, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8011DAE8, 0x8011DAE8) //this is a jump label
/*8011DAE8 0011A8E8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*8011DAEC 0011A8EC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8011DAF0 0011A8F0*/ PPC::Runtime::ASM::beq(.L_8011DAFC);
/*8011DAF4 0011A8F4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8011DAF8 0011A8F8*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
RUNTIME_PPC_JUMP_LABEL(.L_8011DAFC, 0x8011DAFC) //this is a jump label
/*8011DAFC 0011A8FC*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*8011DB00 0011A900*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*8011DB04 0011A904*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x32);
/*8011DB08 0011A908*/ PPC::Runtime::ASM::blt(.L_8011DAE8);
/*8011DB0C 0011A90C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30c, context->r30));
/*8011DB10 0011A910*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*8011DB14 0011A914*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8011DB18 0011A918*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8011DB1C, 0x8011DB1C) //this is a jump label
/*8011DB1C 0011A91C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8011DB20 0011A920*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8011DB24 0011A924*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8011DB28 0011A928*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8011DB2C 0011A92C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8011DB30 0011A930*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8011DB34 0011A934*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8011DB38 0011A938*/ PPC::Runtime::ASM::blr();
}