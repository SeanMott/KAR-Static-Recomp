//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80429DBC.hpp"
#include "fn_80429CB0.hpp"
#include "fn_80428AD8.hpp"
#include "fn_80429774.hpp"
#include "fn_HSD_ObjFree.hpp"



void fn_80428F64(PPC::Runtime::GCContext* context)
{
/*80428F64 00425D64*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80428F68 00425D68*/ PPC::Runtime::ASM::mflr(context->r0);
/*80428F6C 00425D6C*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18058C1F4 @ Get_MemoryOffset_HighBit);
/*80428F70 00425D70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80428F74 00425D74*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80428F78 00425D78*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80428F7C 00425D7C*/ PPC::Runtime::ASM::lbzu(context->r3, STRUCT_BYTE4_COUNT_18058C1F4 @ Get_MemoryOffset_LowBit ( context->r4 ));
/* 80428F80 00425D80  54 60 CF FF */ extrwi. context->r0 , context->r3 , 1 , 24
/*80428F84 00425D84*/ PPC::Runtime::ASM::bne(.L_80428FA4);
/*80428F88 00425D88*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE324 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80428F8C 00425D8C*/ PPC::Runtime::ASM::cmplw(context->r31, context->r0);
/*80428F90 00425D90*/ PPC::Runtime::ASM::bne(.L_80428FA4);
/*80428F94 00425D94*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80428F98 00425D98*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 6, 25, 25);
/*80428F9C 00425D9C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80428FA0 00425DA0*/ PPC::Runtime::ASM::b(.L_80429038);
RUNTIME_PPC_JUMP_LABEL(.L_80428FA4, 0x80428FA4) //this is a jump label
/*80428FA4 00425DA4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80428FA8 00425DA8*/ PPC::Runtime::ASM::bl(fn_80429DBC);
/*80428FAC 00425DAC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80428FB0 00425DB0*/ PPC::Runtime::ASM::bl(fn_80429CB0);
/*80428FB4 00425DB4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80428FB8 00425DB8*/ PPC::Runtime::ASM::bl(fn_80428AD8);
/*80428FBC 00425DBC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*80428FC0 00425DC0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xff);
/*80428FC4 00425DC4*/ PPC::Runtime::ASM::beq(.L_80428FD0);
/*80428FC8 00425DC8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80428FCC 00425DCC*/ PPC::Runtime::ASM::bl(fn_80429774);
RUNTIME_PPC_JUMP_LABEL(.L_80428FD0, 0x80428FD0) //this is a jump label
/*80428FD0 00425DD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80428FD4 00425DD4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80428FD8 00425DD8*/ PPC::Runtime::ASM::beq(.L_80428FE8);
/*80428FDC 00425DDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80428FE0 00425DE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80428FE4 00425DE4*/ PPC::Runtime::ASM::b(.L_80428FFC);
RUNTIME_PPC_JUMP_LABEL(.L_80428FE8, 0x80428FE8) //this is a jump label
/*80428FE8 00425DE8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*80428FEC 00425DEC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80428FF0 00425DF0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80428FF4 00425DF4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80428FF8 00425DF8*/ PPC::Runtime::ASM::stwx(context->r4, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80428FFC, 0x80428FFC) //this is a jump label
/*80428FFC 00425DFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80429000 00425E00*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80429004 00425E04*/ PPC::Runtime::ASM::beq(.L_80429014);
/*80429008 00425E08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8042900C 00425E0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80429010 00425E10*/ PPC::Runtime::ASM::b(.L_80429028);
RUNTIME_PPC_JUMP_LABEL(.L_80429014, 0x80429014) //this is a jump label
/*80429014 00425E14*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*80429018 00425E18*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8042901C 00425E1C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80429020 00425E20*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80429024 00425E24*/ PPC::Runtime::ASM::stwx(context->r4, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80429028, 0x80429028) //this is a jump label
/*80429028 00425E28*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058C19C @ Get_MemoryOffset_HighBit);
/*8042902C 00425E2C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80429030 00425E30*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058C19C @ Get_MemoryOffset_LowBit);
/*80429034 00425E34*/ PPC::Runtime::ASM::bl(fn_HSD_ObjFree);
RUNTIME_PPC_JUMP_LABEL(.L_80429038, 0x80429038) //this is a jump label
/*80429038 00425E38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8042903C 00425E3C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80429040 00425E40*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80429044 00425E44*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80429048 00425E48*/ PPC::Runtime::ASM::blr();
}