//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801F306C(PPC::Runtime::GCContext* context)
{
/*801F306C 001EFE6C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801F3070 001EFE70*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F3074 001EFE74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801F3078 001EFE78*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*801F307C 001EFE7C*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*801F3080 001EFE80*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801F3084 001EFE84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801F3088 001EFE88*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*801F308C 001EFE8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*801F3090 001EFE90*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F3094 001EFE94*/ PPC::Runtime::ASM::bne(.L_801F30A4);
/*801F3098 001EFE98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*801F309C 001EFE9C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F30A0 001EFEA0*/ PPC::Runtime::ASM::beq(.L_801F31F4);
RUNTIME_PPC_JUMP_LABEL(.L_801F30A4, 0x801F30A4) //this is a jump label
/*801F30A4 001EFEA4*/ PPC::Runtime::ASM::mr(context->r27, context->r30);
/*801F30A8 001EFEA8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*801F30AC 001EFEAC*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*801F30B0 001EFEB0*/ PPC::Runtime::ASM::b(.L_801F3130);
RUNTIME_PPC_JUMP_LABEL(.L_801F30B4, 0x801F30B4) //this is a jump label
/*801F30B4 001EFEB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10f8, context->r27));
/*801F30B8 001EFEB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r30));
/*801F30BC 001EFEBC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F30C0 001EFEC0*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r28);
/*801F30C4 001EFEC4*/ PPC::Runtime::ASM::beq(.L_801F3124);
/*801F30C8 001EFEC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*801F30CC 001EFECC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2064 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F30D0 001EFED0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*801F30D4 001EFED4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801F30D8 001EFED8*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
/*801F30DC 001EFEDC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2064 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F30E0 001EFEE0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801F30E4 001EFEE4*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*801F30E8 001EFEE8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r30));
/*801F30EC 001EFEEC*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0x4);
/*801F30F0 001EFEF0*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*801F30F4 001EFEF4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801F30F8 001EFEF8*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r5);
/*801F30FC 001EFEFC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 3, 28, 28);
/*801F3100 001EFF00*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r5);
/*801F3104 001EFF04*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r30));
/*801F3108 001EFF08*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r5);
/*801F310C 001EFF0C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 5, 26, 26);
/*801F3110 001EFF10*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r5);
/*801F3114 001EFF14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x314, context->r30));
/*801F3118 001EFF18*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r5);
/*801F311C 001EFF1C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 6, 25, 25);
/*801F3120 001EFF20*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_801F3124, 0x801F3124) //this is a jump label
/*801F3124 001EFF24*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x8);
/*801F3128 001EFF28*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x4);
/*801F312C 001EFF2C*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801F3130, 0x801F3130) //this is a jump label
/*801F3130 001EFF30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*801F3134 001EFF34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801F3138 001EFF38*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801F313C 001EFF3C*/ PPC::Runtime::ASM::cmpw(context->r31, context->r0);
/*801F3140 001EFF40*/ PPC::Runtime::ASM::blt(.L_801F30B4);
/*801F3144 001EFF44*/ PPC::Runtime::ASM::mr(context->r27, context->r30);
/*801F3148 001EFF48*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*801F314C 001EFF4C*/ PPC::Runtime::ASM::b(.L_801F3190);
RUNTIME_PPC_JUMP_LABEL(.L_801F3150, 0x801F3150) //this is a jump label
/*801F3150 001EFF50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x115c, context->r27));
/*801F3154 001EFF54*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801F3158 001EFF58*/ PPC::Runtime::ASM::beq(.L_801F3188);
/*801F315C 001EFF5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11d4, context->r27));
/*801F3160 001EFF60*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F3164 001EFF64*/ PPC::Runtime::ASM::beq(.L_801F3188);
/*801F3168 001EFF68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*801F316C 001EFF6C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2064 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F3170 001EFF70*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*801F3174 001EFF74*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801F3178 001EFF78*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
/*801F317C 001EFF7C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2064 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F3180 001EFF80*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801F3184 001EFF84*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
RUNTIME_PPC_JUMP_LABEL(.L_801F3188, 0x801F3188) //this is a jump label
/*801F3188 001EFF88*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x4);
/*801F318C 001EFF8C*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801F3190, 0x801F3190) //this is a jump label
/*801F3190 001EFF90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10f0, context->r30));
/*801F3194 001EFF94*/ PPC::Runtime::ASM::cmpw(context->r28, context->r0);
/*801F3198 001EFF98*/ PPC::Runtime::ASM::blt(.L_801F3150);
/*801F319C 001EFF9C*/ PPC::Runtime::ASM::mr(context->r27, context->r30);
/*801F31A0 001EFFA0*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*801F31A4 001EFFA4*/ PPC::Runtime::ASM::b(.L_801F31E8);
RUNTIME_PPC_JUMP_LABEL(.L_801F31A8, 0x801F31A8) //this is a jump label
/*801F31A8 001EFFA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x124c, context->r27));
/*801F31AC 001EFFAC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801F31B0 001EFFB0*/ PPC::Runtime::ASM::beq(.L_801F31E0);
/*801F31B4 001EFFB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c4, context->r27));
/*801F31B8 001EFFB8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801F31BC 001EFFBC*/ PPC::Runtime::ASM::beq(.L_801F31E0);
/*801F31C0 001EFFC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r3));
/*801F31C4 001EFFC4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2064 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F31C8 001EFFC8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r3));
/*801F31CC 001EFFCC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801F31D0 001EFFD0*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
/*801F31D4 001EFFD4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2064 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F31D8 001EFFD8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801F31DC 001EFFDC*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
RUNTIME_PPC_JUMP_LABEL(.L_801F31E0, 0x801F31E0) //this is a jump label
/*801F31E0 001EFFE0*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x4);
/*801F31E4 001EFFE4*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801F31E8, 0x801F31E8) //this is a jump label
/*801F31E8 001EFFE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10f4, context->r30));
/*801F31EC 001EFFEC*/ PPC::Runtime::ASM::cmpw(context->r28, context->r0);
/*801F31F0 001EFFF0*/ PPC::Runtime::ASM::blt(.L_801F31A8);
RUNTIME_PPC_JUMP_LABEL(.L_801F31F4, 0x801F31F4) //this is a jump label
/*801F31F4 001EFFF4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*801F31F8 001EFFF8*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*801F31FC 001EFFFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801F3200 001F0000*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F3204 001F0004*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801F3208 001F0008*/ PPC::Runtime::ASM::blr();
}