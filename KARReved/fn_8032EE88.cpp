//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8037B028.hpp"
#include "fn_8037B028.hpp"
#include "fn_80379398.hpp"
#include "fn_80379398.hpp"
#include "fn_80379398.hpp"
#include "fn_8032F084.hpp"



void fn_8032EE88(PPC::Runtime::GCContext* context)
{
/*8032EE88 0032BC88*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8032EE8C 0032BC8C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8032EE90 0032BC90*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4120 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8032EE94 0032BC94*/ PPC::Runtime::ASM::lis(context->r5, lbl_804E3808 @ Get_MemoryOffset_HighBit);
/*8032EE98 0032BC98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8032EE9C 0032BC9C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8032EEA0 0032BCA0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8032EEA4 0032BCA4*/ PPC::Runtime::ASM::addi(context->r31, context->r5, lbl_804E3808 @ Get_MemoryOffset_LowBit);
/*8032EEA8 0032BCA8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8032EEAC 0032BCAC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8032EEB0 0032BCB0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*8032EEB4 0032BCB4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8032EEB8 0032BCB8*/ PPC::Runtime::ASM::addi(context->r29, context->r30, 0x18);
/*8032EEBC 0032BCBC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8032EEC0 0032BCC0*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*8032EEC4 0032BCC4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8032EEC8 0032BCC8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8032EECC 0032BCCC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8032EED0 0032BCD0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8032EED4 0032BCD4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8032EED8 0032BCD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8032EEDC 0032BCDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*8032EEE0 0032BCE0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8032EEE4 0032BCE4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8032EEE8 0032BCE8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8032EEEC 0032BCEC*/ PPC::Runtime::ASM::bctrl();
/*8032EEF0 0032BCF0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*8032EEF4 0032BCF4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8032EEF8 0032BCF8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*8032EEFC 0032BCFC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8032EF00 0032BD00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8032EF04 0032BD04*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8032EF08 0032BD08*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8032EF0C 0032BD0C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8032EF10 0032BD10*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8032EF14 0032BD14*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*8032EF18 0032BD18*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*8032EF1C 0032BD1C*/ PPC::Runtime::ASM::addi(context->r29, context->r30, 0x64);
/*8032EF20 0032BD20*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*8032EF24 0032BD24*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8032EF28 0032BD28*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r30));
/*8032EF2C 0032BD2C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8032EF30 0032BD30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
/*8032EF34 0032BD34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
/*8032EF38 0032BD38*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8032EF3C 0032BD3C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8032EF40 0032BD40*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8032EF44 0032BD44*/ PPC::Runtime::ASM::bctrl();
/*8032EF48 0032BD48*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*8032EF4C 0032BD4C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8032EF50 0032BD50*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*8032EF54 0032BD54*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8032EF58 0032BD58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8032EF5C 0032BD5C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8032EF60 0032BD60*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8032EF64 0032BD64*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8032EF68 0032BD68*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8032EF6C 0032BD6C*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*8032EF70 0032BD70*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xb0);
/*8032EF74 0032BD74*/ PPC::Runtime::ASM::bl(fn_80379398);
/*8032EF78 0032BD78*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xec);
/*8032EF7C 0032BD7C*/ PPC::Runtime::ASM::bl(fn_80379398);
/*8032EF80 0032BD80*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x128);
/*8032EF84 0032BD84*/ PPC::Runtime::ASM::bl(fn_80379398);
/*8032EF88 0032BD88*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE238 @ Get_MemoryOffset_HighBit);
/*8032EF8C 0032BD8C*/ PPC::Runtime::ASM::addi(context->r29, context->r30, 0x184);
/*8032EF90 0032BD90*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BE238 @ Get_MemoryOffset_LowBit);
/*8032EF94 0032BD94*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8032EF98 0032BD98*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x184, context->r30));
/*8032EF9C 0032BD9C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8032EFA0 0032BDA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x188, context->r30));
/*8032EFA4 0032BDA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18c, context->r30));
/*8032EFA8 0032BDA8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8032EFAC 0032BDAC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8032EFB0 0032BDB0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8032EFB4 0032BDB4*/ PPC::Runtime::ASM::bctrl();
/*8032EFB8 0032BDB8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE210 @ Get_MemoryOffset_HighBit);
/*8032EFBC 0032BDBC*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*8032EFC0 0032BDC0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804BE210 @ Get_MemoryOffset_LowBit);
/*8032EFC4 0032BDC4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8032EFC8 0032BDC8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8032EFCC 0032BDCC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8032EFD0 0032BDD0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8032EFD4 0032BDD4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x198, context->r30));
/*8032EFD8 0032BDD8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8032EFDC 0032BDDC*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 8032EFE0 0032BDE0  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*8032EFE4 0032BDE4*/ PPC::Runtime::ASM::bne(.L_8032EFF8);
/*8032EFE8 0032BDE8*/ PPC::Runtime::ASM::li(context->r3, lbl_805DA9FC @ Get_MemoryOffset_SDA21);
/*8032EFEC 0032BDEC*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*8032EFF0 0032BDF0*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAA04 @ Get_MemoryOffset_SDA21);
/*8032EFF4 0032BDF4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8032EFF8, 0x8032EFF8) //this is a jump label
/*8032EFF8 0032BDF8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xc);
/*8032EFFC 0032BDFC*/ PPC::Runtime::ASM::bne(.L_8032F010);
/*8032F000 0032BE00*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xda8);
/*8032F004 0032BE04*/ PPC::Runtime::ASM::li(context->r3, lbl_805DA9FC @ Get_MemoryOffset_SDA21);
/*8032F008 0032BE08*/ PPC::Runtime::ASM::li(context->r4, 0x3e5);
/*8032F00C 0032BE0C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8032F010, 0x8032F010) //this is a jump label
/*8032F010 0032BE10*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*8032F014 0032BE14*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xfb8);
/*8032F018 0032BE18*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8032F01C 0032BE1C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*8032F020 0032BE20*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8032F024 0032BE24*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*8032F028 0032BE28*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8032F02C 0032BE2C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8032F030 0032BE30*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*8032F034 0032BE34*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8032F038 0032BE38*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xfc4);
/*8032F03C 0032BE3C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8032F040 0032BE40*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*8032F044 0032BE44*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8032F048 0032BE48*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8032F04C 0032BE4C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8032F050 0032BE50*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*8032F054 0032BE54*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8032F058 0032BE58*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*8032F05C 0032BE5C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8032F060 0032BE60*/ PPC::Runtime::ASM::bl(fn_8032F084);
/*8032F064 0032BE64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8032F068 0032BE68*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8032F06C 0032BE6C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8032F070 0032BE70*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8032F074 0032BE74*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8032F078 0032BE78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8032F07C 0032BE7C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8032F080 0032BE80*/ PPC::Runtime::ASM::blr();
}