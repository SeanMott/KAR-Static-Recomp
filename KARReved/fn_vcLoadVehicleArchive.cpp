//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_lbLoadArchive.hpp"
#include "fn_lbLoadArchive.hpp"



void fn_vcLoadVehicleArchive(PPC::Runtime::GCContext* context)
{
/*801C6D74 001C3B74*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801C6D78 001C3B78*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C6D7C 001C3B7C*/ PPC::Runtime::ASM::li(context->r5, STRUCT_BYTE4_COUNT_1805DD850 @ Get_MemoryOffset_SDA21);
/*801C6D80 001C3B80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801C6D84 001C3B84*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801C6D88 001C3B88*/ PPC::Runtime::ASM::slwi(context->r31, context->r3, 2);
/*801C6D8C 001C3B8C*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r31);
/*801C6D90 001C3B90*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801C6D94 001C3B94*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*801C6D98 001C3B98*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C6D9C 001C3B9C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801C6DA0 001C3BA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*801C6DA4 001C3BA4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801C6DA8 001C3BA8*/ PPC::Runtime::ASM::bne(.L_801C6DD4);
/*801C6DAC 001C3BAC*/ PPC::Runtime::ASM::lis(context->r3, VCWheelShit @ Get_MemoryOffset_HighBit);
/*801C6DB0 001C3BB0*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 3);
/*801C6DB4 001C3BB4*/ PPC::Runtime::ASM::addi(context->r4, context->r3, VCWheelShit @ Get_MemoryOffset_LowBit);
/*801C6DB8 001C3BB8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801C6DBC 001C3BBC*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*801C6DC0 001C3BC0*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r0);
/*801C6DC4 001C3BC4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801C6DC8 001C3BC8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801C6DCC 001C3BCC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801C6DD0 001C3BD0*/ PPC::Runtime::ASM::bl(fn_lbLoadArchive);
RUNTIME_PPC_JUMP_LABEL(.L_801C6DD4, 0x801C6DD4) //this is a jump label
/*801C6DD4 001C3BD4*/ PPC::Runtime::ASM::mulli(context->r4, context->r29, 0x4c);
/*801C6DD8 001C3BD8*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18055A068 @ Get_MemoryOffset_HighBit);
/*801C6DDC 001C3BDC*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 2);
/*801C6DE0 001C3BE0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_18055A068 @ Get_MemoryOffset_LowBit);
/*801C6DE4 001C3BE4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r4);
/*801C6DE8 001C3BE8*/ PPC::Runtime::ASM::add(context->r5, context->r3, context->r0);
/*801C6DEC 001C3BEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*801C6DF0 001C3BF0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801C6DF4 001C3BF4*/ PPC::Runtime::ASM::bne(.L_801C6E20);
/*801C6DF8 001C3BF8*/ PPC::Runtime::ASM::li(context->r3, StarFileNamesAndHSDNames_ArrayBundle @ Get_MemoryOffset_SDA21);
/*801C6DFC 001C3BFC*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 3);
/*801C6E00 001C3C00*/ PPC::Runtime::ASM::lwzx(context->r4, context->r3, context->r31);
/*801C6E04 001C3C04*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801C6E08 001C3C08*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801C6E0C 001C3C0C*/ PPC::Runtime::ASM::add(context->r6, context->r4, context->r0);
/*801C6E10 001C3C10*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r0);
/*801C6E14 001C3C14*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*801C6E18 001C3C18*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801C6E1C 001C3C1C*/ PPC::Runtime::ASM::bl(fn_lbLoadArchive);
RUNTIME_PPC_JUMP_LABEL(.L_801C6E20, 0x801C6E20) //this is a jump label
/*801C6E20 001C3C20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801C6E24 001C3C24*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801C6E28 001C3C28*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801C6E2C 001C3C2C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C6E30 001C3C30*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C6E34 001C3C34*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801C6E38 001C3C38*/ PPC::Runtime::ASM::blr();
}