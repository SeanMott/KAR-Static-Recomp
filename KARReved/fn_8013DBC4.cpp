//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8013DBC4(PPC::Runtime::GCContext* context)
{
/*8013DBC4 0013A9C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8013DBC8 0013A9C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013DBCC 0013A9CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8013DBD0 0013A9D0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8013DBD4 0013A9D4*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8013DBD8 0013A9D8*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8013DBDC 0013A9DC*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*8013DBE0 0013A9E0*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*8013DBE4 0013A9E4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8013DBE8 0013A9E8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8013DBEC 0013A9EC*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805E6318 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DBF0 0013A9F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*8013DBF4 0013A9F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8013DBF8 0013A9F8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8013DBFC 0013A9FC*/ PPC::Runtime::ASM::beq(.L_8013DC0C);
/*8013DC00 0013AA00*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*8013DC04 0013AA04*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8013DC08 0013AA08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8013DC0C, 0x8013DC0C) //this is a jump label
/*8013DC0C 0013AA0C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8013DC10 0013AA10*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8013DC14 0013AA14*/ PPC::Runtime::ASM::bl(fn_8044FA70);
/*8013DC18 0013AA18*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8013DC1C 0013AA1C*/ PPC::Runtime::ASM::lis(context->r4, 0x6666);
/*8013DC20 0013AA20*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*8013DC24 0013AA24*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x6667);
/*8013DC28 0013AA28*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DC2C 0013AA2C*/ PPC::Runtime::ASM::extsb(context->r31, context->r27);
/* 8013DC30 0013AA30  7C 00 F8 96 */ mulhw context->r0 , context->r0 , context->r31
/*8013DC34 0013AA34*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01CC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DC38 0013AA38*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8013DC3C 0013AA3C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8013DC40 0013AA40*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E01A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DC44 0013AA44*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*8013DC48 0013AA48*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8013DC4C 0013AA4C*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8013DC50 0013AA50*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*8013DC54 0013AA54*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8013DC58 0013AA58*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8013DC5C 0013AA5C*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/*8013DC60 0013AA60*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E024C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DC64 0013AA64*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8013DC68 0013AA68*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DC6C 0013AA6C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8013DC70 0013AA70*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x49, context->r3));
/*8013DC74 0013AA74*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/* 8013DC78 0013AA78  4C C6 32 42 */ crset context->cr1eq
/*8013DC7C 0013AA7C*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013DC80 0013AA80*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*8013DC84 0013AA84*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0294 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DC88 0013AA88*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*8013DC8C 0013AA8C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/* 8013DC90 0013AA90  7C 00 F8 96 */ mulhw context->r0 , context->r0 , context->r31
/*8013DC94 0013AA94*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013DC98 0013AA98*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*8013DC9C 0013AA9C*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8013DCA0 0013AAA0*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*8013DCA4 0013AAA4*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*8013DCA8 0013AAA8*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*8013DCAC 0013AAAC*/ PPC::Runtime::ASM::subf(context->r5, context->r0, context->r31);
/* 8013DCB0 0013AAB0  4C C6 32 42 */ crset context->cr1eq
/*8013DCB4 0013AAB4*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013DCB8 0013AAB8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0298 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DCBC 0013AABC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013DCC0 0013AAC0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DCC4 0013AAC4*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6640 @ Get_MemoryOffset_SDA21);
/* 8013DCC8 0013AAC8  4C C6 32 42 */ crset context->cr1eq
/*8013DCCC 0013AACC*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013DCD0 0013AAD0*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*8013DCD4 0013AAD4*/ PPC::Runtime::ASM::extsb(context->r28, context->r28);
/*8013DCD8 0013AAD8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*8013DCDC 0013AADC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/* 8013DCE0 0013AAE0  7C 00 E0 96 */ mulhw context->r0 , context->r0 , context->r28
/*8013DCE4 0013AAE4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DCE8 0013AAE8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013DCEC 0013AAEC*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*8013DCF0 0013AAF0*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8013DCF4 0013AAF4*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*8013DCF8 0013AAF8*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/* 8013DCFC 0013AAFC  4C C6 32 42 */ crset context->cr1eq
/*8013DD00 0013AB00*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013DD04 0013AB04*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*8013DD08 0013AB08*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01DC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DD0C 0013AB0C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*8013DD10 0013AB10*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/* 8013DD14 0013AB14  7C 00 E0 96 */ mulhw context->r0 , context->r0 , context->r28
/*8013DD18 0013AB18*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013DD1C 0013AB1C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*8013DD20 0013AB20*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8013DD24 0013AB24*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*8013DD28 0013AB28*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*8013DD2C 0013AB2C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*8013DD30 0013AB30*/ PPC::Runtime::ASM::subf(context->r5, context->r0, context->r28);
/* 8013DD34 0013AB34  4C C6 32 42 */ crset context->cr1eq
/*8013DD38 0013AB38*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013DD3C 0013AB3C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0274 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DD40 0013AB40*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013DD44 0013AB44*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DD48 0013AB48*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6640 @ Get_MemoryOffset_SDA21);
/* 8013DD4C 0013AB4C  4C C6 32 42 */ crset context->cr1eq
/*8013DD50 0013AB50*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013DD54 0013AB54*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*8013DD58 0013AB58*/ PPC::Runtime::ASM::extsb(context->r28, context->r29);
/*8013DD5C 0013AB5C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*8013DD60 0013AB60*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E029C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/* 8013DD64 0013AB64  7C 00 E0 96 */ mulhw context->r0 , context->r0 , context->r28
/*8013DD68 0013AB68*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DD6C 0013AB6C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013DD70 0013AB70*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*8013DD74 0013AB74*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8013DD78 0013AB78*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*8013DD7C 0013AB7C*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/* 8013DD80 0013AB80  4C C6 32 42 */ crset context->cr1eq
/*8013DD84 0013AB84*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013DD88 0013AB88*/ PPC::Runtime::ASM::lis(context->r3, 0x6666);
/*8013DD8C 0013AB8C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E02A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DD90 0013AB90*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x6667);
/*8013DD94 0013AB94*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0250 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/* 8013DD98 0013AB98  7C 00 E0 96 */ mulhw context->r0 , context->r0 , context->r28
/*8013DD9C 0013AB9C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013DDA0 0013ABA0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D660C @ Get_MemoryOffset_SDA21);
/*8013DDA4 0013ABA4*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 2);
/*8013DDA8 0013ABA8*/ PPC::Runtime::ASM::srwi(context->r5, context->r0, 31);
/*8013DDAC 0013ABAC*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r5);
/*8013DDB0 0013ABB0*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xa);
/*8013DDB4 0013ABB4*/ PPC::Runtime::ASM::subf(context->r5, context->r0, context->r28);
/* 8013DDB8 0013ABB8  4C C6 32 42 */ crset context->cr1eq
/*8013DDBC 0013ABBC*/ PPC::Runtime::ASM::bl(fn_8044FEC4);
/*8013DDC0 0013ABC0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DDC4 0013ABC4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013DDC8 0013ABC8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DDCC 0013ABCC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8013DDD0 0013ABD0*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8013DDD4 0013ABD4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DDD8 0013ABD8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013DDDC 0013ABDC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DDE0 0013ABE0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8013DDE4 0013ABE4*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8013DDE8 0013ABE8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DDEC 0013ABEC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013DDF0 0013ABF0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DDF4 0013ABF4*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8013DDF8 0013ABF8*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8013DDFC 0013ABFC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DE00 0013AC00*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013DE04 0013AC04*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DE08 0013AC08*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8013DE0C 0013AC0C*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8013DE10 0013AC10*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DE14 0013AC14*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013DE18 0013AC18*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DE1C 0013AC1C*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8013DE20 0013AC20*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8013DE24 0013AC24*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DE28 0013AC28*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013DE2C 0013AC2C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DE30 0013AC30*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8013DE34 0013AC34*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8013DE38 0013AC38*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DE3C 0013AC3C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013DE40 0013AC40*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DE44 0013AC44*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*8013DE48 0013AC48*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8013DE4C 0013AC4C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E01F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DE50 0013AC50*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013DE54 0013AC54*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E01B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013DE58 0013AC58*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*8013DE5C 0013AC5C*/ PPC::Runtime::ASM::bl(fn_80450774);
/*8013DE60 0013AC60*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8013DE64 0013AC64*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8013DE68 0013AC68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8013DE6C 0013AC6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013DE70 0013AC70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8013DE74 0013AC74*/ PPC::Runtime::ASM::blr();
}