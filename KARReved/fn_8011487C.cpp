//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8011500C.hpp"
#include "fn_8011500C.hpp"
#include "fn_80052FB8.hpp"



void fn_8011487C(PPC::Runtime::GCContext* context)
{
/*8011487C 0011167C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80114880 00111680*/ PPC::Runtime::ASM::mflr(context->r0);
/*80114884 00111684*/ PPC::Runtime::ASM::li(context->r4, 0x1a);
/*80114888 00111688*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8011488C 0011168C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80114890 00111690*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80114894 00111694*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80114898 00111698*/ PPC::Runtime::ASM::li(context->r3, 0x1b);
/*8011489C 0011169C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801148A0 001116A0*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*801148A4 001116A4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801148A8 001116A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801148AC 001116AC*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*801148B0 001116B0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801148B4 001116B4*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801148B8 001116B8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801148BC 001116BC*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*801148C0 001116C0*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*801148C4 001116C4*/ PPC::Runtime::ASM::lis(context->r4, fn_8011500C @ Get_MemoryOffset_HighBit);
/*801148C8 001116C8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801148CC 001116CC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8011500C @ Get_MemoryOffset_LowBit);
/*801148D0 001116D0*/ PPC::Runtime::ASM::li(context->r5, 0x15);
/*801148D4 001116D4*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*801148D8 001116D8*/ PPC::Runtime::ASM::bl(fn_GObj_AddGXLink);
/*801148DC 001116DC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801148E0 001116E0*/ PPC::Runtime::ASM::lis(context->r4, 0x2800);
/*801148E4 001116E4*/ PPC::Runtime::ASM::bl(fn_80052FB8);
/*801148E8 001116E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801148EC 001116EC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801148F0 001116F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801148F4 001116F4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801148F8 001116F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801148FC 001116FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80114900 00111700*/ PPC::Runtime::ASM::blr();
}