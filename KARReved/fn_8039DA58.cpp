//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8039A878.hpp"
#include "fn_8039A878.hpp"
#include "fn_8039A7BC.hpp"



void fn_8039DA58(PPC::Runtime::GCContext* context)
{
/*8039DA58 0039A858*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8039DA5C 0039A85C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8039DA60 0039A860*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8039DA64 0039A864*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8039DA68 0039A868*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*8039DA6C 0039A86C*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*8039DA70 0039A870*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8039DA74 0039A874*/ PPC::Runtime::ASM::mr(context->r28, context->r5);
/*8039DA78 0039A878*/ PPC::Runtime::ASM::mr(context->r29, context->r6);
/*8039DA7C 0039A87C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8039DA80 0039A880*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8039DA84 0039A884*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC408 @ Get_MemoryOffset_SDA21);
/*8039DA88 0039A888*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC3B0 @ Get_MemoryOffset_SDA21);
/*8039DA8C 0039A88C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8039DA90 0039A890*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8039DA94 0039A894*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8039DA98 0039A898*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8039DA9C 0039A89C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8039DAA0 0039A8A0*/ PPC::Runtime::ASM::beq(.L_8039DD28);
/*8039DAA4 0039A8A4*/ PPC::Runtime::ASM::li(context->r4, 0xb);
/*8039DAA8 0039A8A8*/ PPC::Runtime::ASM::bl(fn_8039A878);
/* 8039DAAC 0039A8AC  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8039DAB0 0039A8B0*/ PPC::Runtime::ASM::beq(.L_8039DB60);
/*8039DAB4 0039A8B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8039DAB8 0039A8B8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039DABC 0039A8BC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8039DAC0 0039A8C0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039DAC4 0039A8C4*/ PPC::Runtime::ASM::bctrl();
/*8039DAC8 0039A8C8*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*8039DACC 0039A8CC*/ PPC::Runtime::ASM::b(.L_8039DAE8);
RUNTIME_PPC_JUMP_LABEL(.L_8039DAD0, 0x8039DAD0) //this is a jump label
/*8039DAD0 0039A8D0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8039DAD4 0039A8D4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*8039DAD8 0039A8D8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8039DADC 0039A8DC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039DAE0 0039A8E0*/ PPC::Runtime::ASM::bctrl();
/*8039DAE4 0039A8E4*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8039DAE8, 0x8039DAE8) //this is a jump label
/*8039DAE8 0039A8E8*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*8039DAEC 0039A8EC*/ PPC::Runtime::ASM::beq(.L_8039DB10);
/*8039DAF0 0039A8F0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8039DAF4 0039A8F4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8039DAF8 0039A8F8*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC410 @ Get_MemoryOffset_SDA21);
/*8039DAFC 0039A8FC*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC3D8 @ Get_MemoryOffset_SDA21);
/*8039DB00 0039A900*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8039DB04 0039A904*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8039DB08 0039A908*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039DB0C 0039A90C*/ PPC::Runtime::ASM::beq(.L_8039DAD0);
RUNTIME_PPC_JUMP_LABEL(.L_8039DB10, 0x8039DB10) //this is a jump label
/*8039DB10 0039A910*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*8039DB14 0039A914*/ PPC::Runtime::ASM::beq(.L_8039DC1C);
/*8039DB18 0039A918*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8039DB1C 0039A91C*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*8039DB20 0039A920*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8039DB24 0039A924*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC410 @ Get_MemoryOffset_SDA21);
/*8039DB28 0039A928*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC3D8 @ Get_MemoryOffset_SDA21);
/*8039DB2C 0039A92C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8039DB30 0039A930*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8039DB34 0039A934*/ PPC::Runtime::ASM::stb(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8039DB38 0039A938*/ PPC::Runtime::ASM::li(context->r26, 0x1);
/*8039DB3C 0039A93C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8039DB40 0039A940*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC410 @ Get_MemoryOffset_SDA21);
/*8039DB44 0039A944*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8039DB48 0039A948*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC3D8 @ Get_MemoryOffset_SDA21);
/*8039DB4C 0039A94C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8039DB50 0039A950*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8039DB54 0039A954*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8039DB58 0039A958*/ PPC::Runtime::ASM::stb(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8039DB5C 0039A95C*/ PPC::Runtime::ASM::b(.L_8039DC1C);
RUNTIME_PPC_JUMP_LABEL(.L_8039DB60, 0x8039DB60) //this is a jump label
/*8039DB60 0039A960*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8039DB64 0039A964*/ PPC::Runtime::ASM::li(context->r4, 0xc);
/*8039DB68 0039A968*/ PPC::Runtime::ASM::bl(fn_8039A878);
/* 8039DB6C 0039A96C  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8039DB70 0039A970*/ PPC::Runtime::ASM::beq(.L_8039DC1C);
/*8039DB74 0039A974*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8039DB78 0039A978*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039DB7C 0039A97C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*8039DB80 0039A980*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039DB84 0039A984*/ PPC::Runtime::ASM::bctrl();
/*8039DB88 0039A988*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*8039DB8C 0039A98C*/ PPC::Runtime::ASM::b(.L_8039DBA8);
RUNTIME_PPC_JUMP_LABEL(.L_8039DB90, 0x8039DB90) //this is a jump label
/*8039DB90 0039A990*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8039DB94 0039A994*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*8039DB98 0039A998*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*8039DB9C 0039A99C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039DBA0 0039A9A0*/ PPC::Runtime::ASM::bctrl();
/*8039DBA4 0039A9A4*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8039DBA8, 0x8039DBA8) //this is a jump label
/*8039DBA8 0039A9A8*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*8039DBAC 0039A9AC*/ PPC::Runtime::ASM::beq(.L_8039DBD0);
/*8039DBB0 0039A9B0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8039DBB4 0039A9B4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8039DBB8 0039A9B8*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC410 @ Get_MemoryOffset_SDA21);
/*8039DBBC 0039A9BC*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC3D8 @ Get_MemoryOffset_SDA21);
/*8039DBC0 0039A9C0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8039DBC4 0039A9C4*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8039DBC8 0039A9C8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039DBCC 0039A9CC*/ PPC::Runtime::ASM::beq(.L_8039DB90);
RUNTIME_PPC_JUMP_LABEL(.L_8039DBD0, 0x8039DBD0) //this is a jump label
/*8039DBD0 0039A9D0*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*8039DBD4 0039A9D4*/ PPC::Runtime::ASM::beq(.L_8039DC1C);
/*8039DBD8 0039A9D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8039DBDC 0039A9DC*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*8039DBE0 0039A9E0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8039DBE4 0039A9E4*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC410 @ Get_MemoryOffset_SDA21);
/*8039DBE8 0039A9E8*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC3D8 @ Get_MemoryOffset_SDA21);
/*8039DBEC 0039A9EC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8039DBF0 0039A9F0*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8039DBF4 0039A9F4*/ PPC::Runtime::ASM::stb(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8039DBF8 0039A9F8*/ PPC::Runtime::ASM::li(context->r26, 0x1);
/*8039DBFC 0039A9FC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8039DC00 0039AA00*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC410 @ Get_MemoryOffset_SDA21);
/*8039DC04 0039AA04*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8039DC08 0039AA08*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC3D8 @ Get_MemoryOffset_SDA21);
/*8039DC0C 0039AA0C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8039DC10 0039AA10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8039DC14 0039AA14*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8039DC18 0039AA18*/ PPC::Runtime::ASM::stb(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8039DC1C, 0x8039DC1C) //this is a jump label
/*8039DC1C 0039AA1C*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8039DC20 0039AA20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r25));
/*8039DC24 0039AA24*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039DC28 0039AA28*/ PPC::Runtime::ASM::beq(.L_8039DC44);
/*8039DC2C 0039AA2C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039DC30 0039AA30*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8039DC34 0039AA34*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039DC38 0039AA38*/ PPC::Runtime::ASM::bctrl();
/*8039DC3C 0039AA3C*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*8039DC40 0039AA40*/ PPC::Runtime::ASM::b(.L_8039DC48);
RUNTIME_PPC_JUMP_LABEL(.L_8039DC44, 0x8039DC44) //this is a jump label
/*8039DC44 0039AA44*/ PPC::Runtime::ASM::li(context->r26, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039DC48, 0x8039DC48) //this is a jump label
/*8039DC48 0039AA48*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r25));
/*8039DC4C 0039AA4C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039DC50 0039AA50*/ PPC::Runtime::ASM::beq(.L_8039DC68);
/*8039DC54 0039AA54*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039DC58 0039AA58*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*8039DC5C 0039AA5C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039DC60 0039AA60*/ PPC::Runtime::ASM::bctrl();
/*8039DC64 0039AA64*/ PPC::Runtime::ASM::b(.L_8039DC6C);
RUNTIME_PPC_JUMP_LABEL(.L_8039DC68, 0x8039DC68) //this is a jump label
/*8039DC68 0039AA68*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039DC6C, 0x8039DC6C) //this is a jump label
/*8039DC6C 0039AA6C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8039DC70 0039AA70*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8039DC74 0039AA74*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r25));
/*8039DC78 0039AA78*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r26);
/*8039DC7C 0039AA7C*/ PPC::Runtime::ASM::lha(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r6));
/*8039DC80 0039AA80*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8039DC84 0039AA84*/ PPC::Runtime::ASM::add(context->r4, context->r5, context->r4);
/*8039DC88 0039AA88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039DC8C 0039AA8C*/ PPC::Runtime::ASM::srwi(context->r0, context->r4, 1);
/*8039DC90 0039AA90*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E5050 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8039DC94 0039AA94*/ PPC::Runtime::ASM::add(context->r0, context->r6, context->r0);
/*8039DC98 0039AA98*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*8039DC9C 0039AA9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039DCA0 0039AAA0*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E5040 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8039DCA4 0039AAA4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039DCA8 0039AAA8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*8039DCAC 0039AAAC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8039DCB0 0039AAB0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f3, context->f0, context->f1);
/*8039DCB4 0039AAB4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*8039DCB8 0039AAB8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8039DCBC 0039AABC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*8039DCC0 0039AAC0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039DCC4 0039AAC4*/ PPC::Runtime::ASM::bctrl();
/*8039DCC8 0039AAC8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039DCCC 0039AACC*/ PPC::Runtime::ASM::bne(.L_8039DE18);
/*8039DCD0 0039AAD0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8039DCD4 0039AAD4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8039DCD8 0039AAD8*/ PPC::Runtime::ASM::bl(fn_8039A7BC);
/* 8039DCDC 0039AADC  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8039DCE0 0039AAE0*/ PPC::Runtime::ASM::beq(.L_8039DE18);
/*8039DCE4 0039AAE4*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8039DCE8 0039AAE8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8039DCEC 0039AAEC*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC410 @ Get_MemoryOffset_SDA21);
/*8039DCF0 0039AAF0*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC3D8 @ Get_MemoryOffset_SDA21);
/*8039DCF4 0039AAF4*/ PPC::Runtime::ASM::lha(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r26));
/*8039DCF8 0039AAF8*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8039DCFC 0039AAFC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8039DD00 0039AB00*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8039DD04 0039AB04*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039DD08 0039AB08*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*8039DD0C 0039AB0C*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*8039DD10 0039AB10*/ PPC::Runtime::ASM::add(context->r6, context->r29, context->r25);
/*8039DD14 0039AB14*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*8039DD18 0039AB18*/ PPC::Runtime::ASM::add(context->r5, context->r28, context->r0);
/*8039DD1C 0039AB1C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039DD20 0039AB20*/ PPC::Runtime::ASM::bctrl();
/*8039DD24 0039AB24*/ PPC::Runtime::ASM::b(.L_8039DE18);
RUNTIME_PPC_JUMP_LABEL(.L_8039DD28, 0x8039DD28) //this is a jump label
/*8039DD28 0039AB28*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8039DD2C 0039AB2C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8039DD30 0039AB30*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*8039DD34 0039AB34*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039DD38 0039AB38*/ PPC::Runtime::ASM::bctrl();
/*8039DD3C 0039AB3C*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*8039DD40 0039AB40*/ PPC::Runtime::ASM::b(.L_8039DD5C);
RUNTIME_PPC_JUMP_LABEL(.L_8039DD44, 0x8039DD44) //this is a jump label
/*8039DD44 0039AB44*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8039DD48 0039AB48*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*8039DD4C 0039AB4C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*8039DD50 0039AB50*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039DD54 0039AB54*/ PPC::Runtime::ASM::bctrl();
/*8039DD58 0039AB58*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8039DD5C, 0x8039DD5C) //this is a jump label
/*8039DD5C 0039AB5C*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*8039DD60 0039AB60*/ PPC::Runtime::ASM::beq(.L_8039DD84);
/*8039DD64 0039AB64*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8039DD68 0039AB68*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8039DD6C 0039AB6C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC410 @ Get_MemoryOffset_SDA21);
/*8039DD70 0039AB70*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC3D8 @ Get_MemoryOffset_SDA21);
/*8039DD74 0039AB74*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8039DD78 0039AB78*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8039DD7C 0039AB7C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039DD80 0039AB80*/ PPC::Runtime::ASM::beq(.L_8039DD44);
RUNTIME_PPC_JUMP_LABEL(.L_8039DD84, 0x8039DD84) //this is a jump label
/*8039DD84 0039AB84*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8039DD88 0039AB88*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8039DD8C 0039AB8C*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*8039DD90 0039AB90*/ PPC::Runtime::ASM::beq(.L_8039DE18);
/*8039DD94 0039AB94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r25));
/*8039DD98 0039AB98*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039DD9C 0039AB9C*/ PPC::Runtime::ASM::beq(.L_8039DDB8);
/*8039DDA0 0039ABA0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039DDA4 0039ABA4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8039DDA8 0039ABA8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039DDAC 0039ABAC*/ PPC::Runtime::ASM::bctrl();
/*8039DDB0 0039ABB0*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8039DDB4 0039ABB4*/ PPC::Runtime::ASM::b(.L_8039DDBC);
RUNTIME_PPC_JUMP_LABEL(.L_8039DDB8, 0x8039DDB8) //this is a jump label
/*8039DDB8 0039ABB8*/ PPC::Runtime::ASM::li(context->r27, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039DDBC, 0x8039DDBC) //this is a jump label
/*8039DDBC 0039ABBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r25));
/*8039DDC0 0039ABC0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039DDC4 0039ABC4*/ PPC::Runtime::ASM::beq(.L_8039DDDC);
/*8039DDC8 0039ABC8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039DDCC 0039ABCC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*8039DDD0 0039ABD0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039DDD4 0039ABD4*/ PPC::Runtime::ASM::bctrl();
/*8039DDD8 0039ABD8*/ PPC::Runtime::ASM::b(.L_8039DDE0);
RUNTIME_PPC_JUMP_LABEL(.L_8039DDDC, 0x8039DDDC) //this is a jump label
/*8039DDDC 0039ABDC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039DDE0, 0x8039DDE0) //this is a jump label
/*8039DDE0 0039ABE0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8039DDE4 0039ABE4*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8039DDE8 0039ABE8*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r25));
/*8039DDEC 0039ABEC*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r27);
/*8039DDF0 0039ABF0*/ PPC::Runtime::ASM::lha(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r5));
/*8039DDF4 0039ABF4*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r3);
/*8039DDF8 0039ABF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039DDFC 0039ABFC*/ PPC::Runtime::ASM::srwi(context->r0, context->r3, 1);
/*8039DE00 0039AC00*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5050 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8039DE04 0039AC04*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r0);
/*8039DE08 0039AC08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039DE0C 0039AC0C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039DE10 0039AC10*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8039DE14 0039AC14*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8039DE18, 0x8039DE18) //this is a jump label
/*8039DE18 0039AC18*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8039DE1C 0039AC1C*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*8039DE20 0039AC20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8039DE24 0039AC24*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8039DE28 0039AC28*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8039DE2C 0039AC2C*/ PPC::Runtime::ASM::blr();
}