//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80078D7C(PPC::Runtime::GCContext* context)
{
/*80078D7C 00075B7C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80078D80 00075B80*/ PPC::Runtime::ASM::mflr(context->r0);
/*80078D84 00075B84*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80078D88 00075B88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80078D8C 00075B8C*/ PPC::Runtime::ASM::bl(fn_8045B760);
/*80078D90 00075B90*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_HighBit);
/*80078D94 00075B94*/ PPC::Runtime::ASM::lwzu(context->r0, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_LowBit ( context->r4 ));
/*80078D98 00075B98*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*80078D9C 00075B9C*/ PPC::Runtime::ASM::beq(.L_80078DD0);
/*80078DA0 00075BA0*/ PPC::Runtime::ASM::bge(.L_80078DB0);
/*80078DA4 00075BA4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80078DA8 00075BA8*/ PPC::Runtime::ASM::beq(.L_80078DBC);
/*80078DAC 00075BAC*/ PPC::Runtime::ASM::b(.L_80078E14);
RUNTIME_PPC_JUMP_LABEL(.L_80078DB0, 0x80078DB0) //this is a jump label
/*80078DB0 00075BB0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*80078DB4 00075BB4*/ PPC::Runtime::ASM::bge(.L_80078E14);
/*80078DB8 00075BB8*/ PPC::Runtime::ASM::b(.L_80078DF0);
RUNTIME_PPC_JUMP_LABEL(.L_80078DBC, 0x80078DBC) //this is a jump label
/*80078DBC 00075BBC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80078DC0 00075BC0*/ PPC::Runtime::ASM::beq(.L_80078E14);
/*80078DC4 00075BC4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80078DC8 00075BC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80078DCC 00075BCC*/ PPC::Runtime::ASM::b(.L_80078E14);
RUNTIME_PPC_JUMP_LABEL(.L_80078DD0, 0x80078DD0) //this is a jump label
/*80078DD0 00075BD0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80078DD4 00075BD4*/ PPC::Runtime::ASM::bl(fn_804533C4);
/*80078DD8 00075BD8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80078DDC 00075BDC*/ PPC::Runtime::ASM::beq(.L_80078E14);
/*80078DE0 00075BE0*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_HighBit);
/*80078DE4 00075BE4*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*80078DE8 00075BE8*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*80078DEC 00075BEC*/ PPC::Runtime::ASM::b(.L_80078E14);
RUNTIME_PPC_JUMP_LABEL(.L_80078DF0, 0x80078DF0) //this is a jump label
/*80078DF0 00075BF0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80078DF4 00075BF4*/ PPC::Runtime::ASM::beq(.L_80078E14);
/*80078DF8 00075BF8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80078DFC 00075BFC*/ PPC::Runtime::ASM::bl(fn_804533C4);
/*80078E00 00075C00*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80078E04 00075C04*/ PPC::Runtime::ASM::bne(.L_80078E14);
/*80078E08 00075C08*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_HighBit);
/*80078E0C 00075C0C*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*80078E10 00075C10*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_LowBit ( context->r3 ));
RUNTIME_PPC_JUMP_LABEL(.L_80078E14, 0x80078E14) //this is a jump label
/*80078E14 00075C14*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_HighBit);
/*80078E18 00075C18*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_1805528F8 @ Get_MemoryOffset_LowBit);
/*80078E1C 00075C1C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80078E20 00075C20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80078E24 00075C24*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80078E28 00075C28*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80078E2C 00075C2C*/ PPC::Runtime::ASM::blr();
}