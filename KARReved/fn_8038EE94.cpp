//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8038EE94(PPC::Runtime::GCContext* context)
{
/*8038EE94 0038BC94*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8038EE98 0038BC98*/ PPC::Runtime::ASM::lis(context->r7, 0x5555);
/*8038EE9C 0038BC9C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8038EEA0 0038BCA0*/ PPC::Runtime::ASM::addi(context->r0, context->r7, 0x5556);
/*8038EEA4 0038BCA4*/ PPC::Runtime::ASM::b(.L_8038EFCC);
RUNTIME_PPC_JUMP_LABEL(.L_8038EEA8, 0x8038EEA8) //this is a jump label
/*8038EEA8 0038BCA8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8038EEAC 0038BCAC*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8038EEB0 0038BCB0*/ PPC::Runtime::ASM::b(.L_8038EFB4);
RUNTIME_PPC_JUMP_LABEL(.L_8038EEB4, 0x8038EEB4) //this is a jump label
/*8038EEB4 0038BCB4*/ PPC::Runtime::ASM::addi(context->r10, context->r11, 0x1);
/*8038EEB8 0038BCB8*/ PPC::Runtime::ASM::lbz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/* 8038EEBC 0038BCBC  7D 20 50 96 */ mulhw context->r9 , context->r0 , context->r10
/*8038EEC0 0038BCC0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8038EEC4 0038BCC4*/ PPC::Runtime::ASM::srwi(context->r8, context->r9, 31);
/*8038EEC8 0038BCC8*/ PPC::Runtime::ASM::add(context->r8, context->r9, context->r8);
/*8038EECC 0038BCCC*/ PPC::Runtime::ASM::mulli(context->r8, context->r8, 0x3);
/*8038EED0 0038BCD0*/ PPC::Runtime::ASM::subf(context->r8, context->r8, context->r10);
/*8038EED4 0038BCD4*/ PPC::Runtime::ASM::mulli(context->r9, context->r8, 0x70);
/*8038EED8 0038BCD8*/ PPC::Runtime::ASM::mulli(context->r8, context->r12, 0x70);
/*8038EEDC 0038BCDC*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x10);
/*8038EEE0 0038BCE0*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x10);
/*8038EEE4 0038BCE4*/ PPC::Runtime::ASM::add(context->r9, context->r4, context->r9);
/*8038EEE8 0038BCE8*/ PPC::Runtime::ASM::add(context->r8, context->r3, context->r8);
/*8038EEEC 0038BCEC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*8038EEF0 0038BCF0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*8038EEF4 0038BCF4*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*8038EEF8 0038BCF8*/ PPC::Runtime::ASM::bne(.L_8038EF20);
/*8038EEFC 0038BCFC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*8038EF00 0038BD00*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r9));
/*8038EF04 0038BD04*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*8038EF08 0038BD08*/ PPC::Runtime::ASM::bne(.L_8038EF20);
/*8038EF0C 0038BD0C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*8038EF10 0038BD10*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r9));
/*8038EF14 0038BD14*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*8038EF18 0038BD18*/ PPC::Runtime::ASM::bne(.L_8038EF20);
/*8038EF1C 0038BD1C*/ PPC::Runtime::ASM::li(context->r7, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8038EF20, 0x8038EF20) //this is a jump label
/* 8038EF20 0038BD20  54 E7 06 3F */ clrlwi. context->r7 , context->r7 , 24
/*8038EF24 0038BD24*/ PPC::Runtime::ASM::beq(.L_8038EFA8);
/*8038EF28 0038BD28*/ PPC::Runtime::ASM::lis(context->r7, 0x5555);
/*8038EF2C 0038BD2C*/ PPC::Runtime::ASM::addi(context->r10, context->r12, 0x1);
/*8038EF30 0038BD30*/ PPC::Runtime::ASM::addi(context->r8, context->r7, 0x5556);
/*8038EF34 0038BD34*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/* 8038EF38 0038BD38  7D 28 50 96 */ mulhw context->r9 , context->r8 , context->r10
/*8038EF3C 0038BD3C*/ PPC::Runtime::ASM::srwi(context->r8, context->r9, 31);
/*8038EF40 0038BD40*/ PPC::Runtime::ASM::add(context->r8, context->r9, context->r8);
/*8038EF44 0038BD44*/ PPC::Runtime::ASM::mulli(context->r8, context->r8, 0x3);
/*8038EF48 0038BD48*/ PPC::Runtime::ASM::subf(context->r8, context->r8, context->r10);
/*8038EF4C 0038BD4C*/ PPC::Runtime::ASM::mulli(context->r9, context->r11, 0x70);
/*8038EF50 0038BD50*/ PPC::Runtime::ASM::mulli(context->r8, context->r8, 0x70);
/*8038EF54 0038BD54*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x10);
/*8038EF58 0038BD58*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x10);
/*8038EF5C 0038BD5C*/ PPC::Runtime::ASM::add(context->r9, context->r4, context->r9);
/*8038EF60 0038BD60*/ PPC::Runtime::ASM::add(context->r8, context->r3, context->r8);
/*8038EF64 0038BD64*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*8038EF68 0038BD68*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*8038EF6C 0038BD6C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*8038EF70 0038BD70*/ PPC::Runtime::ASM::bne(.L_8038EF98);
/*8038EF74 0038BD74*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*8038EF78 0038BD78*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r9));
/*8038EF7C 0038BD7C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*8038EF80 0038BD80*/ PPC::Runtime::ASM::bne(.L_8038EF98);
/*8038EF84 0038BD84*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*8038EF88 0038BD88*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r9));
/*8038EF8C 0038BD8C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*8038EF90 0038BD90*/ PPC::Runtime::ASM::bne(.L_8038EF98);
/*8038EF94 0038BD94*/ PPC::Runtime::ASM::li(context->r7, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8038EF98, 0x8038EF98) //this is a jump label
/* 8038EF98 0038BD98  54 E7 06 3F */ clrlwi. context->r7 , context->r7 , 24
/*8038EF9C 0038BD9C*/ PPC::Runtime::ASM::beq(.L_8038EFA8);
/*8038EFA0 0038BDA0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8038EFA4 0038BDA4*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8038EFA8, 0x8038EFA8) //this is a jump label
/*8038EFA8 0038BDA8*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8038EFAC 0038BDAC*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*8038EFB0 0038BDB0*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
RUNTIME_PPC_JUMP_LABEL(.L_8038EFB4, 0x8038EFB4) //this is a jump label
/*8038EFB4 0038BDB4*/ PPC::Runtime::ASM::lbz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8038EFB8 0038BDB8*/ PPC::Runtime::ASM::cmplwi(context->r11, 0x3);
/*8038EFBC 0038BDBC*/ PPC::Runtime::ASM::blt(.L_8038EEB4);
/*8038EFC0 0038BDC0*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8038EFC4 0038BDC4*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*8038EFC8 0038BDC8*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_8038EFCC, 0x8038EFCC) //this is a jump label
/*8038EFCC 0038BDCC*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8038EFD0 0038BDD0*/ PPC::Runtime::ASM::cmplwi(context->r7, 0x3);
/*8038EFD4 0038BDD4*/ PPC::Runtime::ASM::blt(.L_8038EEA8);
/*8038EFD8 0038BDD8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8038EFDC 0038BDDC*/ PPC::Runtime::ASM::blr();
}