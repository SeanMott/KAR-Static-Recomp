//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80191FDC.hpp"
#include "fn_80191EF8.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_800638F8.hpp"
#include "fn_80062CA4.hpp"
#include "fn_80254114.hpp"
#include "fn_800638F8.hpp"
#include "fn_80253CE4.hpp"
#include "fn_800638F8.hpp"
#include "fn_80253CE4.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_800638F8.hpp"
#include "fn_80062CA4.hpp"
#include "fn_80254114.hpp"
#include "fn_800638F8.hpp"
#include "fn_80253CE4.hpp"



void fn_8021DB44(PPC::Runtime::GCContext* context)
{
/*8021DB44 0021A944*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*8021DB48 0021A948*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021DB4C 0021A94C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8021DB50 0021A950*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8021DB54 0021A954*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8021DB58 0021A958*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*8021DB5C 0021A95C*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8021DB60 0021A960*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8021DB64 0021A964*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8021DB68 0021A968*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*8021DB6C 0021A96C*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*8021DB70 0021A970*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8021DB74 0021A974*/ PPC::Runtime::ASM::bne(.L_8021DDFC);
/*8021DB78 0021A978*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*8021DB7C 0021A97C*/ PPC::Runtime::ASM::beq(.L_8021DBD8);
/*8021DB80 0021A980*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x99c, context->r29));
/*8021DB84 0021A984*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*8021DB88 0021A988*/ PPC::Runtime::ASM::beq(.L_8021DBA4);
/*8021DB8C 0021A98C*/ PPC::Runtime::ASM::bge(.L_8021DBD0);
/*8021DB90 0021A990*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8021DB94 0021A994*/ PPC::Runtime::ASM::bge(.L_8021DBD0);
/*8021DB98 0021A998*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8021DB9C 0021A99C*/ PPC::Runtime::ASM::bge(.L_8021DBA4);
/*8021DBA0 0021A9A0*/ PPC::Runtime::ASM::b(.L_8021DBD0);
RUNTIME_PPC_JUMP_LABEL(.L_8021DBA4, 0x8021DBA4) //this is a jump label
/*8021DBA4 0021A9A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa10, context->r29));
/*8021DBA8 0021A9A8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8021DBAC 0021A9AC*/ PPC::Runtime::ASM::beq(.L_8021DBD0);
/*8021DBB0 0021A9B0*/ PPC::Runtime::ASM::bge(.L_8021DBC0);
/*8021DBB4 0021A9B4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8021DBB8 0021A9B8*/ PPC::Runtime::ASM::bge(.L_8021DBCC);
/*8021DBBC 0021A9BC*/ PPC::Runtime::ASM::b(.L_8021DBD0);
RUNTIME_PPC_JUMP_LABEL(.L_8021DBC0, 0x8021DBC0) //this is a jump label
/*8021DBC0 0021A9C0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*8021DBC4 0021A9C4*/ PPC::Runtime::ASM::beq(.L_8021DBD0);
/*8021DBC8 0021A9C8*/ PPC::Runtime::ASM::b(.L_8021DBD0);
RUNTIME_PPC_JUMP_LABEL(.L_8021DBCC, 0x8021DBCC) //this is a jump label
/*8021DBCC 0021A9CC*/ PPC::Runtime::ASM::li(context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8021DBD0, 0x8021DBD0) //this is a jump label
/*8021DBD0 0021A9D0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8021DBD4 0021A9D4*/ PPC::Runtime::ASM::b(.L_8021DBF4);
RUNTIME_PPC_JUMP_LABEL(.L_8021DBD8, 0x8021DBD8) //this is a jump label
/*8021DBD8 0021A9D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8021DBDC 0021A9DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*8021DBE0 0021A9E0*/ PPC::Runtime::ASM::subf(context->r0, context->r3, context->r0);
/*8021DBE4 0021A9E4*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*8021DBE8 0021A9E8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*8021DBEC 0021A9EC*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*8021DBF0 0021A9F0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8021DBF4, 0x8021DBF4) //this is a jump label
/*8021DBF4 0021A9F4*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*8021DBF8 0021A9F8*/ PPC::Runtime::ASM::beq(.L_8021DC1C);
/*8021DBFC 0021A9FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0c, context->r29));
/*8021DC00 0021AA00*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8021DC04 0021AA04*/ PPC::Runtime::ASM::bl(fn_80191FDC);
/*8021DC08 0021AA08*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0c, context->r29));
/*8021DC0C 0021AA0C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8021DC10 0021AA10*/ PPC::Runtime::ASM::bl(fn_80191EF8);
/*8021DC14 0021AA14*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805E2778 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021DC18 0021AA18*/ PPC::Runtime::ASM::b(.L_8021DC80);
RUNTIME_PPC_JUMP_LABEL(.L_8021DC1C, 0x8021DC1C) //this is a jump label
/*8021DC1C 0021AA1C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r29));
/*8021DC20 0021AA20*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8021DC24 0021AA24*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8021DC28 0021AA28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8021DC2C 0021AA2C*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8021DC30 0021AA30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r29));
/*8021DC34 0021AA34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x338, context->r29));
/*8021DC38 0021AA38*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2778 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021DC3C 0021AA3C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021DC40 0021AA40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8021DC44 0021AA44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r29));
/*8021DC48 0021AA48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8021DC4C 0021AA4C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8021DC50 0021AA50*/ PPC::Runtime::ASM::bl(fn_HSD_Randf);
/*8021DC54 0021AA54*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E2798 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021DC58 0021AA58*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_4 @ Get_MemoryOffset_HighBit);
/*8021DC5C 0021AA5C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, MemoryOffset_4 @ Get_MemoryOffset_LowBit);
/*8021DC60 0021AA60*/ PPC::Runtime::ASM::fmul(context->f1, context->f0, context->f1);
/*8021DC64 0021AA64*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*8021DC68 0021AA68*/ PPC::Runtime::ASM::frsp(context->f1, context->f1);
/*8021DC6C 0021AA6C*/ PPC::Runtime::ASM::bl(fn_800638F8);
/*8021DC70 0021AA70*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*8021DC74 0021AA74*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8021DC78 0021AA78*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*8021DC7C 0021AA7C*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805E27A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8021DC80, 0x8021DC80) //this is a jump label
/*8021DC80 0021AA80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8021DC84 0021AA84*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021DC88 0021AA88*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8021DC8C 0021AA8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8021DC90 0021AA90*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021DC94 0021AA94*/ PPC::Runtime::ASM::bgt(.L_8021DCF0);
/*8021DC98 0021AA98*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r29));
/*8021DC9C 0021AA9C*/ PPC::Runtime::ASM::lis(context->r3, 0x4330);
/*8021DCA0 0021AAA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3b0, context->r29));
/*8021DCA4 0021AAA4*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*8021DCA8 0021AAA8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8021DCAC 0021AAAC*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*8021DCB0 0021AAB0*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E2770 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021DCB4 0021AAB4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8021DCB8 0021AAB8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8021DCBC 0021AABC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8021DCC0 0021AAC0*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f2);
/*8021DCC4 0021AAC4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8021DCC8 0021AAC8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8021DCCC 0021AACC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*8021DCD0 0021AAD0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8021DCD4 0021AAD4*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8021DCD8 0021AAD8*/ PPC::Runtime::ASM::bne(.L_8021DD0C);
/*8021DCDC 0021AADC*/ PPC::Runtime::ASM::lis(context->r3, 0x2);
/*8021DCE0 0021AAE0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8021DCE4 0021AAE4*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x7960);
/*8021DCE8 0021AAE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r29));
/*8021DCEC 0021AAEC*/ PPC::Runtime::ASM::b(.L_8021DD0C);
RUNTIME_PPC_JUMP_LABEL(.L_8021DCF0, 0x8021DCF0) //this is a jump label
/*8021DCF0 0021AAF0*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb54, context->r29));
/*8021DCF4 0021AAF4*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8021DCF8 0021AAF8*/ PPC::Runtime::ASM::blt(.L_8021DD0C);
/*8021DCFC 0021AAFC*/ PPC::Runtime::ASM::lis(context->r3, 0x2);
/*8021DD00 0021AB00*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8021DD04 0021AB04*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x7960);
/*8021DD08 0021AB08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_8021DD0C, 0x8021DD0C) //this is a jump label
/*8021DD0C 0021AB0C*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*8021DD10 0021AB10*/ PPC::Runtime::ASM::bne(.L_8021DD9C);
/*8021DD14 0021AB14*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8021DD18 0021AB18*/ PPC::Runtime::ASM::b(.L_8021DD90);
RUNTIME_PPC_JUMP_LABEL(.L_8021DD1C, 0x8021DD1C) //this is a jump label
/*8021DD1C 0021AB1C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8021DD20 0021AB20*/ PPC::Runtime::ASM::bl(fn_80254114);
/*8021DD24 0021AB24*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8021DD28 0021AB28*/ PPC::Runtime::ASM::cmpwi(context->r27, -0x1);
/*8021DD2C 0021AB2C*/ PPC::Runtime::ASM::beq(.L_8021DD8C);
/*8021DD30 0021AB30*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*8021DD34 0021AB34*/ PPC::Runtime::ASM::bne(.L_8021DD6C);
/*8021DD38 0021AB38*/ PPC::Runtime::ASM::xoris(context->r3, context->r31, 0x8000);
/*8021DD3C 0021AB3C*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8021DD40 0021AB40*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8021DD44 0021AB44*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*8021DD48 0021AB48*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E2770 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021DD4C 0021AB4C*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x340);
/*8021DD50 0021AB50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8021DD54 0021AB54*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E2798 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021DD58 0021AB58*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8021DD5C 0021AB5C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8021DD60 0021AB60*/ PPC::Runtime::ASM::fdiv(context->f1, context->f2, context->f0);
/*8021DD64 0021AB64*/ PPC::Runtime::ASM::frsp(context->f1, context->f1);
/*8021DD68 0021AB68*/ PPC::Runtime::ASM::bl(fn_800638F8);
RUNTIME_PPC_JUMP_LABEL(.L_8021DD6C, 0x8021DD6C) //this is a jump label
/*8021DD6C 0021AB6C*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8021DD70 0021AB70*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E27A4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021DD74 0021AB74*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8021DD78 0021AB78*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8021DD7C 0021AB7C*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x14);
/*8021DD80 0021AB80*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8021DD84 0021AB84*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8021DD88 0021AB88*/ PPC::Runtime::ASM::bl(fn_80253CE4);
RUNTIME_PPC_JUMP_LABEL(.L_8021DD8C, 0x8021DD8C) //this is a jump label
/*8021DD8C 0021AB8C*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8021DD90, 0x8021DD90) //this is a jump label
/*8021DD90 0021AB90*/ PPC::Runtime::ASM::cmpw(context->r28, context->r31);
/*8021DD94 0021AB94*/ PPC::Runtime::ASM::blt(.L_8021DD1C);
/*8021DD98 0021AB98*/ PPC::Runtime::ASM::b(.L_8021DFA0);
RUNTIME_PPC_JUMP_LABEL(.L_8021DD9C, 0x8021DD9C) //this is a jump label
/*8021DD9C 0021AB9C*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*8021DDA0 0021ABA0*/ PPC::Runtime::ASM::bne(.L_8021DDD8);
/*8021DDA4 0021ABA4*/ PPC::Runtime::ASM::xoris(context->r3, context->r31, 0x8000);
/*8021DDA8 0021ABA8*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8021DDAC 0021ABAC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8021DDB0 0021ABB0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*8021DDB4 0021ABB4*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E2770 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021DDB8 0021ABB8*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x340);
/*8021DDBC 0021ABBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8021DDC0 0021ABC0*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E2798 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021DDC4 0021ABC4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8021DDC8 0021ABC8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8021DDCC 0021ABCC*/ PPC::Runtime::ASM::fdiv(context->f1, context->f2, context->f0);
/*8021DDD0 0021ABD0*/ PPC::Runtime::ASM::frsp(context->f1, context->f1);
/*8021DDD4 0021ABD4*/ PPC::Runtime::ASM::bl(fn_800638F8);
RUNTIME_PPC_JUMP_LABEL(.L_8021DDD8, 0x8021DDD8) //this is a jump label
/*8021DDD8 0021ABD8*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8021DDDC 0021ABDC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E27A4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021DDE0 0021ABE0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8021DDE4 0021ABE4*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x14);
/*8021DDE8 0021ABE8*/ PPC::Runtime::ASM::li(context->r3, 0x14);
/*8021DDEC 0021ABEC*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8021DDF0 0021ABF0*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8021DDF4 0021ABF4*/ PPC::Runtime::ASM::bl(fn_80253CE4);
/*8021DDF8 0021ABF8*/ PPC::Runtime::ASM::b(.L_8021DFA0);
RUNTIME_PPC_JUMP_LABEL(.L_8021DDFC, 0x8021DDFC) //this is a jump label
/*8021DDFC 0021ABFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8021DE00 0021AC00*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8021DE04 0021AC04*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021DE08 0021AC08*/ PPC::Runtime::ASM::bgt(.L_8021DE64);
/*8021DE0C 0021AC0C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r29));
/*8021DE10 0021AC10*/ PPC::Runtime::ASM::lis(context->r3, 0x4330);
/*8021DE14 0021AC14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3b0, context->r29));
/*8021DE18 0021AC18*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*8021DE1C 0021AC1C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8021DE20 0021AC20*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*8021DE24 0021AC24*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E2770 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021DE28 0021AC28*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8021DE2C 0021AC2C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8021DE30 0021AC30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8021DE34 0021AC34*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f2);
/*8021DE38 0021AC38*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8021DE3C 0021AC3C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8021DE40 0021AC40*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*8021DE44 0021AC44*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8021DE48 0021AC48*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8021DE4C 0021AC4C*/ PPC::Runtime::ASM::bne(.L_8021DE80);
/*8021DE50 0021AC50*/ PPC::Runtime::ASM::lis(context->r3, 0x2);
/*8021DE54 0021AC54*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8021DE58 0021AC58*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x7960);
/*8021DE5C 0021AC5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r29));
/*8021DE60 0021AC60*/ PPC::Runtime::ASM::b(.L_8021DE80);
RUNTIME_PPC_JUMP_LABEL(.L_8021DE64, 0x8021DE64) //this is a jump label
/*8021DE64 0021AC64*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb54, context->r29));
/*8021DE68 0021AC68*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8021DE6C 0021AC6C*/ PPC::Runtime::ASM::blt(.L_8021DE80);
/*8021DE70 0021AC70*/ PPC::Runtime::ASM::lis(context->r3, 0x2);
/*8021DE74 0021AC74*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8021DE78 0021AC78*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x7960);
/*8021DE7C 0021AC7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_8021DE80, 0x8021DE80) //this is a jump label
/*8021DE80 0021AC80*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*8021DE84 0021AC84*/ PPC::Runtime::ASM::bne(.L_8021DEA8);
/*8021DE88 0021AC88*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r6));
/*8021DE8C 0021AC8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r6));
/*8021DE90 0021AC90*/ PPC::Runtime::ASM::subf(context->r0, context->r3, context->r0);
/*8021DE94 0021AC94*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*8021DE98 0021AC98*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*8021DE9C 0021AC9C*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*8021DEA0 0021ACA0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8021DEA4 0021ACA4*/ PPC::Runtime::ASM::b(.L_8021DEC4);
RUNTIME_PPC_JUMP_LABEL(.L_8021DEA8, 0x8021DEA8) //this is a jump label
/*8021DEA8 0021ACA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r6));
/*8021DEAC 0021ACAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r6));
/*8021DEB0 0021ACB0*/ PPC::Runtime::ASM::subf(context->r0, context->r3, context->r0);
/*8021DEB4 0021ACB4*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*8021DEB8 0021ACB8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*8021DEBC 0021ACBC*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*8021DEC0 0021ACC0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8021DEC4, 0x8021DEC4) //this is a jump label
/*8021DEC4 0021ACC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r29));
/*8021DEC8 0021ACC8*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8021DECC 0021ACCC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8021DED0 0021ACD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8021DED4 0021ACD4*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8021DED8 0021ACD8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r29));
/*8021DEDC 0021ACDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x338, context->r29));
/*8021DEE0 0021ACE0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2778 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021DEE4 0021ACE4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021DEE8 0021ACE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8021DEEC 0021ACEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r29));
/*8021DEF0 0021ACF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8021DEF4 0021ACF4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8021DEF8 0021ACF8*/ PPC::Runtime::ASM::bl(fn_HSD_Randf);
/*8021DEFC 0021ACFC*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E2798 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021DF00 0021AD00*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_4 @ Get_MemoryOffset_HighBit);
/*8021DF04 0021AD04*/ PPC::Runtime::ASM::addi(context->r4, context->r3, MemoryOffset_4 @ Get_MemoryOffset_LowBit);
/*8021DF08 0021AD08*/ PPC::Runtime::ASM::fmul(context->f1, context->f0, context->f1);
/*8021DF0C 0021AD0C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*8021DF10 0021AD10*/ PPC::Runtime::ASM::frsp(context->f1, context->f1);
/*8021DF14 0021AD14*/ PPC::Runtime::ASM::bl(fn_800638F8);
/*8021DF18 0021AD18*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*8021DF1C 0021AD1C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8021DF20 0021AD20*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*8021DF24 0021AD24*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8021DF28 0021AD28*/ PPC::Runtime::ASM::b(.L_8021DF98);
RUNTIME_PPC_JUMP_LABEL(.L_8021DF2C, 0x8021DF2C) //this is a jump label
/*8021DF2C 0021AD2C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8021DF30 0021AD30*/ PPC::Runtime::ASM::bl(fn_80254114);
/*8021DF34 0021AD34*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8021DF38 0021AD38*/ PPC::Runtime::ASM::cmpwi(context->r28, -0x1);
/*8021DF3C 0021AD3C*/ PPC::Runtime::ASM::beq(.L_8021DF94);
/*8021DF40 0021AD40*/ PPC::Runtime::ASM::xoris(context->r3, context->r30, 0x8000);
/*8021DF44 0021AD44*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8021DF48 0021AD48*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8021DF4C 0021AD4C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*8021DF50 0021AD50*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E2770 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021DF54 0021AD54*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x340);
/*8021DF58 0021AD58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8021DF5C 0021AD5C*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E2798 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021DF60 0021AD60*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8021DF64 0021AD64*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8021DF68 0021AD68*/ PPC::Runtime::ASM::fdiv(context->f1, context->f2, context->f0);
/*8021DF6C 0021AD6C*/ PPC::Runtime::ASM::frsp(context->f1, context->f1);
/*8021DF70 0021AD70*/ PPC::Runtime::ASM::bl(fn_800638F8);
/*8021DF74 0021AD74*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E27A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021DF78 0021AD78*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8021DF7C 0021AD7C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E27A4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8021DF80 0021AD80*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8021DF84 0021AD84*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x14);
/*8021DF88 0021AD88*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8021DF8C 0021AD8C*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8021DF90 0021AD90*/ PPC::Runtime::ASM::bl(fn_80253CE4);
RUNTIME_PPC_JUMP_LABEL(.L_8021DF94, 0x8021DF94) //this is a jump label
/*8021DF94 0021AD94*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8021DF98, 0x8021DF98) //this is a jump label
/*8021DF98 0021AD98*/ PPC::Runtime::ASM::cmpw(context->r31, context->r30);
/*8021DF9C 0021AD9C*/ PPC::Runtime::ASM::blt(.L_8021DF2C);
RUNTIME_PPC_JUMP_LABEL(.L_8021DFA0, 0x8021DFA0) //this is a jump label
/*8021DFA0 0021ADA0*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8021DFA4 0021ADA4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*8021DFA8 0021ADA8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8021DFAC 0021ADAC*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8021DFB0 0021ADB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8021DFB4 0021ADB4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021DFB8 0021ADB8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*8021DFBC 0021ADBC*/ PPC::Runtime::ASM::blr();
}