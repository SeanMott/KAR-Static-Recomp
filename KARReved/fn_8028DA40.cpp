//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803792B8.hpp"
#include "fn_803792B8.hpp"
#include "fn_803792B8.hpp"
#include "fn_803792B8.hpp"
#include "fn_803792B8.hpp"
#include "fn_803792B8.hpp"
#include "fn_803792B8.hpp"
#include "fn_803792B8.hpp"
#include "fn_803792B8.hpp"
#include "fn_803792B8.hpp"
#include "fn_803792B8.hpp"



void fn_8028DA40(PPC::Runtime::GCContext* context)
{
/*8028DA40 0028A840*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8028DA44 0028A844*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028DA48 0028A848*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028DA4C 0028A84C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028DA50 0028A850*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8028DA54 0028A854*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 8028DA58 0028A858  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8028DA5C 0028A85C*/ PPC::Runtime::ASM::beq(.L_8028DDEC);
/*8028DA60 0028A860*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD62C @ Get_MemoryOffset_HighBit);
/*8028DA64 0028A864*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x274);
/*8028DA68 0028A868*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD62C @ Get_MemoryOffset_LowBit);
/*8028DA6C 0028A86C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028DA70 0028A870*/ PPC::Runtime::ASM::beq(.L_8028DABC);
/*8028DA74 0028A874*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*8028DA78 0028A878*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*8028DA7C 0028A87C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x274, context->r30));
/*8028DA80 0028A880*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x284, context->r30));
/*8028DA84 0028A884*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8028DA88 0028A888*/ PPC::Runtime::ASM::beq(.L_8028DA94);
/*8028DA8C 0028A88C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028DA90 0028A890*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_8028DA94, 0x8028DA94) //this is a jump label
/*8028DA94 0028A894*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x274);
/*8028DA98 0028A898*/ PPC::Runtime::ASM::beq(.L_8028DABC);
/*8028DA9C 0028A89C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*8028DAA0 0028A8A0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x274);
/*8028DAA4 0028A8A4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*8028DAA8 0028A8A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x274, context->r30));
/*8028DAAC 0028A8AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x274, context->r30));
/*8028DAB0 0028A8B0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028DAB4 0028A8B4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028DAB8 0028A8B8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028DABC, 0x8028DABC) //this is a jump label
/*8028DABC 0028A8BC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x238);
/*8028DAC0 0028A8C0*/ PPC::Runtime::ASM::beq(.L_8028DB0C);
/*8028DAC4 0028A8C4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*8028DAC8 0028A8C8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*8028DACC 0028A8CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x238, context->r30));
/*8028DAD0 0028A8D0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x248, context->r30));
/*8028DAD4 0028A8D4*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8028DAD8 0028A8D8*/ PPC::Runtime::ASM::beq(.L_8028DAE4);
/*8028DADC 0028A8DC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028DAE0 0028A8E0*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_8028DAE4, 0x8028DAE4) //this is a jump label
/*8028DAE4 0028A8E4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x238);
/*8028DAE8 0028A8E8*/ PPC::Runtime::ASM::beq(.L_8028DB0C);
/*8028DAEC 0028A8EC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*8028DAF0 0028A8F0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x238);
/*8028DAF4 0028A8F4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*8028DAF8 0028A8F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x238, context->r30));
/*8028DAFC 0028A8FC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x238, context->r30));
/*8028DB00 0028A900*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028DB04 0028A904*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028DB08 0028A908*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028DB0C, 0x8028DB0C) //this is a jump label
/*8028DB0C 0028A90C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x1fc);
/*8028DB10 0028A910*/ PPC::Runtime::ASM::beq(.L_8028DB5C);
/*8028DB14 0028A914*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*8028DB18 0028A918*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*8028DB1C 0028A91C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1fc, context->r30));
/*8028DB20 0028A920*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20c, context->r30));
/*8028DB24 0028A924*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8028DB28 0028A928*/ PPC::Runtime::ASM::beq(.L_8028DB34);
/*8028DB2C 0028A92C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028DB30 0028A930*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_8028DB34, 0x8028DB34) //this is a jump label
/*8028DB34 0028A934*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x1fc);
/*8028DB38 0028A938*/ PPC::Runtime::ASM::beq(.L_8028DB5C);
/*8028DB3C 0028A93C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*8028DB40 0028A940*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1fc);
/*8028DB44 0028A944*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*8028DB48 0028A948*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1fc, context->r30));
/*8028DB4C 0028A94C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1fc, context->r30));
/*8028DB50 0028A950*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028DB54 0028A954*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028DB58 0028A958*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028DB5C, 0x8028DB5C) //this is a jump label
/*8028DB5C 0028A95C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x1c0);
/*8028DB60 0028A960*/ PPC::Runtime::ASM::beq(.L_8028DBAC);
/*8028DB64 0028A964*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*8028DB68 0028A968*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*8028DB6C 0028A96C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r30));
/*8028DB70 0028A970*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r30));
/*8028DB74 0028A974*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8028DB78 0028A978*/ PPC::Runtime::ASM::beq(.L_8028DB84);
/*8028DB7C 0028A97C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028DB80 0028A980*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_8028DB84, 0x8028DB84) //this is a jump label
/*8028DB84 0028A984*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x1c0);
/*8028DB88 0028A988*/ PPC::Runtime::ASM::beq(.L_8028DBAC);
/*8028DB8C 0028A98C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*8028DB90 0028A990*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1c0);
/*8028DB94 0028A994*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*8028DB98 0028A998*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r30));
/*8028DB9C 0028A99C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r30));
/*8028DBA0 0028A9A0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028DBA4 0028A9A4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028DBA8 0028A9A8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028DBAC, 0x8028DBAC) //this is a jump label
/*8028DBAC 0028A9AC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x184);
/*8028DBB0 0028A9B0*/ PPC::Runtime::ASM::beq(.L_8028DBFC);
/*8028DBB4 0028A9B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*8028DBB8 0028A9B8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*8028DBBC 0028A9BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x184, context->r30));
/*8028DBC0 0028A9C0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x194, context->r30));
/*8028DBC4 0028A9C4*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8028DBC8 0028A9C8*/ PPC::Runtime::ASM::beq(.L_8028DBD4);
/*8028DBCC 0028A9CC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028DBD0 0028A9D0*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_8028DBD4, 0x8028DBD4) //this is a jump label
/*8028DBD4 0028A9D4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x184);
/*8028DBD8 0028A9D8*/ PPC::Runtime::ASM::beq(.L_8028DBFC);
/*8028DBDC 0028A9DC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*8028DBE0 0028A9E0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x184);
/*8028DBE4 0028A9E4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*8028DBE8 0028A9E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x184, context->r30));
/*8028DBEC 0028A9EC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x184, context->r30));
/*8028DBF0 0028A9F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028DBF4 0028A9F4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028DBF8 0028A9F8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028DBFC, 0x8028DBFC) //this is a jump label
/*8028DBFC 0028A9FC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x148);
/*8028DC00 0028AA00*/ PPC::Runtime::ASM::beq(.L_8028DC4C);
/*8028DC04 0028AA04*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*8028DC08 0028AA08*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*8028DC0C 0028AA0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r30));
/*8028DC10 0028AA10*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x158, context->r30));
/*8028DC14 0028AA14*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8028DC18 0028AA18*/ PPC::Runtime::ASM::beq(.L_8028DC24);
/*8028DC1C 0028AA1C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028DC20 0028AA20*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_8028DC24, 0x8028DC24) //this is a jump label
/*8028DC24 0028AA24*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x148);
/*8028DC28 0028AA28*/ PPC::Runtime::ASM::beq(.L_8028DC4C);
/*8028DC2C 0028AA2C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*8028DC30 0028AA30*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x148);
/*8028DC34 0028AA34*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*8028DC38 0028AA38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r30));
/*8028DC3C 0028AA3C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r30));
/*8028DC40 0028AA40*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028DC44 0028AA44*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028DC48 0028AA48*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028DC4C, 0x8028DC4C) //this is a jump label
/*8028DC4C 0028AA4C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x10c);
/*8028DC50 0028AA50*/ PPC::Runtime::ASM::beq(.L_8028DC9C);
/*8028DC54 0028AA54*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*8028DC58 0028AA58*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*8028DC5C 0028AA5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r30));
/*8028DC60 0028AA60*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r30));
/*8028DC64 0028AA64*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8028DC68 0028AA68*/ PPC::Runtime::ASM::beq(.L_8028DC74);
/*8028DC6C 0028AA6C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028DC70 0028AA70*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_8028DC74, 0x8028DC74) //this is a jump label
/*8028DC74 0028AA74*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x10c);
/*8028DC78 0028AA78*/ PPC::Runtime::ASM::beq(.L_8028DC9C);
/*8028DC7C 0028AA7C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*8028DC80 0028AA80*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x10c);
/*8028DC84 0028AA84*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*8028DC88 0028AA88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r30));
/*8028DC8C 0028AA8C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r30));
/*8028DC90 0028AA90*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028DC94 0028AA94*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028DC98 0028AA98*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028DC9C, 0x8028DC9C) //this is a jump label
/*8028DC9C 0028AA9C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xd0);
/*8028DCA0 0028AAA0*/ PPC::Runtime::ASM::beq(.L_8028DCEC);
/*8028DCA4 0028AAA4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*8028DCA8 0028AAA8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*8028DCAC 0028AAAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r30));
/*8028DCB0 0028AAB0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r30));
/*8028DCB4 0028AAB4*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8028DCB8 0028AAB8*/ PPC::Runtime::ASM::beq(.L_8028DCC4);
/*8028DCBC 0028AABC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028DCC0 0028AAC0*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_8028DCC4, 0x8028DCC4) //this is a jump label
/*8028DCC4 0028AAC4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xd0);
/*8028DCC8 0028AAC8*/ PPC::Runtime::ASM::beq(.L_8028DCEC);
/*8028DCCC 0028AACC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*8028DCD0 0028AAD0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xd0);
/*8028DCD4 0028AAD4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*8028DCD8 0028AAD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r30));
/*8028DCDC 0028AADC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r30));
/*8028DCE0 0028AAE0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028DCE4 0028AAE4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028DCE8 0028AAE8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028DCEC, 0x8028DCEC) //this is a jump label
/*8028DCEC 0028AAEC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x94);
/*8028DCF0 0028AAF0*/ PPC::Runtime::ASM::beq(.L_8028DD3C);
/*8028DCF4 0028AAF4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*8028DCF8 0028AAF8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*8028DCFC 0028AAFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r30));
/*8028DD00 0028AB00*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r30));
/*8028DD04 0028AB04*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8028DD08 0028AB08*/ PPC::Runtime::ASM::beq(.L_8028DD14);
/*8028DD0C 0028AB0C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028DD10 0028AB10*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_8028DD14, 0x8028DD14) //this is a jump label
/*8028DD14 0028AB14*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x94);
/*8028DD18 0028AB18*/ PPC::Runtime::ASM::beq(.L_8028DD3C);
/*8028DD1C 0028AB1C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*8028DD20 0028AB20*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x94);
/*8028DD24 0028AB24*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*8028DD28 0028AB28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r30));
/*8028DD2C 0028AB2C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r30));
/*8028DD30 0028AB30*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028DD34 0028AB34*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028DD38 0028AB38*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028DD3C, 0x8028DD3C) //this is a jump label
/*8028DD3C 0028AB3C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x58);
/*8028DD40 0028AB40*/ PPC::Runtime::ASM::beq(.L_8028DD8C);
/*8028DD44 0028AB44*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*8028DD48 0028AB48*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*8028DD4C 0028AB4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
/*8028DD50 0028AB50*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
/*8028DD54 0028AB54*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8028DD58 0028AB58*/ PPC::Runtime::ASM::beq(.L_8028DD64);
/*8028DD5C 0028AB5C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028DD60 0028AB60*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_8028DD64, 0x8028DD64) //this is a jump label
/*8028DD64 0028AB64*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x58);
/*8028DD68 0028AB68*/ PPC::Runtime::ASM::beq(.L_8028DD8C);
/*8028DD6C 0028AB6C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*8028DD70 0028AB70*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x58);
/*8028DD74 0028AB74*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*8028DD78 0028AB78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
/*8028DD7C 0028AB7C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r30));
/*8028DD80 0028AB80*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028DD84 0028AB84*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028DD88 0028AB88*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028DD8C, 0x8028DD8C) //this is a jump label
/*8028DD8C 0028AB8C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x1c);
/*8028DD90 0028AB90*/ PPC::Runtime::ASM::beq(.L_8028DDDC);
/*8028DD94 0028AB94*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*8028DD98 0028AB98*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*8028DD9C 0028AB9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8028DDA0 0028ABA0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8028DDA4 0028ABA4*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8028DDA8 0028ABA8*/ PPC::Runtime::ASM::beq(.L_8028DDB4);
/*8028DDAC 0028ABAC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8028DDB0 0028ABB0*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_8028DDB4, 0x8028DDB4) //this is a jump label
/*8028DDB4 0028ABB4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x1c);
/*8028DDB8 0028ABB8*/ PPC::Runtime::ASM::beq(.L_8028DDDC);
/*8028DDBC 0028ABBC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*8028DDC0 0028ABC0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1c);
/*8028DDC4 0028ABC4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*8028DDC8 0028ABC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8028DDCC 0028ABCC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8028DDD0 0028ABD0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028DDD4 0028ABD4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028DDD8 0028ABD8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028DDDC, 0x8028DDDC) //this is a jump label
/*8028DDDC 0028ABDC*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*8028DDE0 0028ABE0*/ PPC::Runtime::ASM::ble(.L_8028DDEC);
/*8028DDE4 0028ABE4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028DDE8 0028ABE8*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028DDEC, 0x8028DDEC) //this is a jump label
/*8028DDEC 0028ABEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028DDF0 0028ABF0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028DDF4 0028ABF4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028DDF8 0028ABF8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8028DDFC 0028ABFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028DE00 0028AC00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8028DE04 0028AC04*/ PPC::Runtime::ASM::blr();
}