//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_8015C758.hpp"
#include "fn_8015C758.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_8015AA5C.hpp"



void fn_8015C7A8(PPC::Runtime::GCContext* context)
{
/*8015C7A8 001595A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8015C7AC 001595AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8015C7B0 001595B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8015C7B4 001595B4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8015C7B8 001595B8*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8015C7BC 001595BC*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8015C7C0 001595C0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8015C7C4 001595C4*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x85c);
/*8015C7C8 001595C8*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8015C7CC 001595CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x85c, context->r3));
/*8015C7D0 001595D0*/ PPC::Runtime::ASM::li(context->r5, 0x50);
/*8015C7D4 001595D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8015C7D8 001595D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8015C7DC 001595DC*/ PPC::Runtime::ASM::bl(fn_80138934);
/*8015C7E0 001595E0*/ PPC::Runtime::ASM::lis(context->r4, fn_8015C758 @ Get_MemoryOffset_HighBit);
/*8015C7E4 001595E4*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8015C7E8 001595E8*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8015C7EC 001595EC*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8015C7F0 001595F0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8015C758 @ Get_MemoryOffset_LowBit);
/*8015C7F4 001595F4*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8015C7F8 001595F8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E08A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8015C7FC 001595FC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8015C800 00159600*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8015C804 00159604*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8015C808 00159608*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8015C80C 0015960C*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*8015C810 00159610*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8015C814 00159614*/ PPC::Runtime::ASM::li(context->r4, 0x65);
/*8015C818 00159618*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*8015C81C 0015961C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8015C820 00159620*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8015C824 00159624*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8015C828 00159628*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8015C82C 0015962C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8015C830 00159630*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r31));
/*8015C834 00159634*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015C838 00159638*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8015C83C 0015963C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8015C840 00159640*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8015C844 00159644*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8015C848 00159648*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8015C84C 0015964C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8015C850 00159650*/ PPC::Runtime::ASM::li(context->r4, 0xd);
/*8015C854 00159654*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*8015C858 00159658*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*8015C85C 0015965C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*8015C860 00159660*/ PPC::Runtime::ASM::bl(fn_8015AA5C);
/*8015C864 00159664*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r27));
/*8015C868 00159668*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8015C86C 0015966C*/ PPC::Runtime::ASM::bne(.L_8015C8FC);
/*8015C870 00159670*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*8015C874 00159674*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8015C878 00159678*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8015C87C 0015967C*/ PPC::Runtime::ASM::bge(.L_8015C890);
/*8015C880 00159680*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8015C884 00159684*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0898 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8015C888 00159688*/ PPC::Runtime::ASM::fadds(context->f2, context->f1, context->f0);
/*8015C88C 0015968C*/ PPC::Runtime::ASM::b(.L_8015C89C);
RUNTIME_PPC_JUMP_LABEL(.L_8015C890, 0x8015C890) //this is a jump label
/*8015C890 00159690*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8015C894 00159694*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0898 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8015C898 00159698*/ PPC::Runtime::ASM::fsubs(context->f2, context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8015C89C, 0x8015C89C) //this is a jump label
/*8015C89C 0015969C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015C8A0 001596A0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E089C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8015C8A4 001596A4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8015C8A8 001596A8*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*8015C8AC 001596AC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015C8B0 001596B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*8015C8B4 001596B4*/ PPC::Runtime::ASM::bl(fn_8040BCA0);
/*8015C8B8 001596B8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8015C8BC 001596BC*/ PPC::Runtime::ASM::beq(.L_8015C8C8);
/*8015C8C0 001596C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8015C8C4 001596C4*/ PPC::Runtime::ASM::b(.L_8015C8CC);
RUNTIME_PPC_JUMP_LABEL(.L_8015C8C8, 0x8015C8C8) //this is a jump label
/*8015C8C8 001596C8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8015C8CC, 0x8015C8CC) //this is a jump label
/*8015C8CC 001596CC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E08A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8015C8D0 001596D0*/ PPC::Runtime::ASM::bl(fn_HSD_MObjSetAlpha?);
/*8015C8D4 001596D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*8015C8D8 001596D8*/ PPC::Runtime::ASM::bl(fn_8040BCA0);
/*8015C8DC 001596DC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8015C8E0 001596E0*/ PPC::Runtime::ASM::beq(.L_8015C8EC);
/*8015C8E4 001596E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8015C8E8 001596E8*/ PPC::Runtime::ASM::b(.L_8015C8F0);
RUNTIME_PPC_JUMP_LABEL(.L_8015C8EC, 0x8015C8EC) //this is a jump label
/*8015C8EC 001596EC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8015C8F0, 0x8015C8F0) //this is a jump label
/*8015C8F0 001596F0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E08A4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8015C8F4 001596F4*/ PPC::Runtime::ASM::bl(fn_HSD_MObjSetAlpha?);
/*8015C8F8 001596F8*/ PPC::Runtime::ASM::b(.L_8015C974);
RUNTIME_PPC_JUMP_LABEL(.L_8015C8FC, 0x8015C8FC) //this is a jump label
/*8015C8FC 001596FC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*8015C900 00159700*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8015C904 00159704*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8015C908 00159708*/ PPC::Runtime::ASM::bge(.L_8015C91C);
/*8015C90C 0015970C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8015C910 00159710*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E089C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8015C914 00159714*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*8015C918 00159718*/ PPC::Runtime::ASM::b(.L_8015C928);
RUNTIME_PPC_JUMP_LABEL(.L_8015C91C, 0x8015C91C) //this is a jump label
/*8015C91C 0015971C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8015C920 00159720*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E089C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8015C924 00159724*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8015C928, 0x8015C928) //this is a jump label
/*8015C928 00159728*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8015C92C 0015972C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*8015C930 00159730*/ PPC::Runtime::ASM::bl(fn_8040BCA0);
/*8015C934 00159734*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8015C938 00159738*/ PPC::Runtime::ASM::beq(.L_8015C944);
/*8015C93C 0015973C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8015C940 00159740*/ PPC::Runtime::ASM::b(.L_8015C948);
RUNTIME_PPC_JUMP_LABEL(.L_8015C944, 0x8015C944) //this is a jump label
/*8015C944 00159744*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8015C948, 0x8015C948) //this is a jump label
/*8015C948 00159748*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E08A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8015C94C 0015974C*/ PPC::Runtime::ASM::bl(fn_HSD_MObjSetAlpha?);
/*8015C950 00159750*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*8015C954 00159754*/ PPC::Runtime::ASM::bl(fn_8040BCA0);
/*8015C958 00159758*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8015C95C 0015975C*/ PPC::Runtime::ASM::beq(.L_8015C968);
/*8015C960 00159760*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8015C964 00159764*/ PPC::Runtime::ASM::b(.L_8015C96C);
RUNTIME_PPC_JUMP_LABEL(.L_8015C968, 0x8015C968) //this is a jump label
/*8015C968 00159768*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8015C96C, 0x8015C96C) //this is a jump label
/*8015C96C 0015976C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E08AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8015C970 00159770*/ PPC::Runtime::ASM::bl(fn_HSD_MObjSetAlpha?);
RUNTIME_PPC_JUMP_LABEL(.L_8015C974, 0x8015C974) //this is a jump label
/*8015C974 00159774*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8015C978 00159778*/ PPC::Runtime::ASM::bne(.L_8015C98C);
/*8015C97C 0015977C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6968 @ Get_MemoryOffset_SDA21);
/*8015C980 00159780*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*8015C984 00159784*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6970 @ Get_MemoryOffset_SDA21);
/*8015C988 00159788*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8015C98C, 0x8015C98C) //this is a jump label
/*8015C98C 0015978C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8015C990 00159790*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015C994 00159794*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8015C998 00159798*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*8015C99C 0015979C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8015C9A0 001597A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*8015C9A4 001597A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8015C9A8 001597A8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8015C9AC 001597AC*/ PPC::Runtime::ASM::bne(.L_8015C9F8);
/*8015C9B0 001597B0*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8015C9B4 001597B4*/ PPC::Runtime::ASM::beq(.L_8015C9F8);
/*8015C9B8 001597B8*/ PPC::Runtime::ASM::bne(.L_8015C9CC);
/*8015C9BC 001597BC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6968 @ Get_MemoryOffset_SDA21);
/*8015C9C0 001597C0*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8015C9C4 001597C4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6970 @ Get_MemoryOffset_SDA21);
/*8015C9C8 001597C8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8015C9CC, 0x8015C9CC) //this is a jump label
/*8015C9CC 001597CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8015C9D0 001597D0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8015C9D4 001597D4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8015C9D8 001597D8*/ PPC::Runtime::ASM::bne(.L_8015C9E8);
/*8015C9DC 001597DC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8015C9E0 001597E0*/ PPC::Runtime::ASM::beq(.L_8015C9E8);
/*8015C9E4 001597E4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8015C9E8, 0x8015C9E8) //this is a jump label
/*8015C9E8 001597E8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8015C9EC 001597EC*/ PPC::Runtime::ASM::bne(.L_8015C9F8);
/*8015C9F0 001597F0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8015C9F4 001597F4*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8015C9F8, 0x8015C9F8) //this is a jump label
/*8015C9F8 001597F8*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*8015C9FC 001597FC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8015CA00 00159800*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r0);
/*8015CA04 00159804*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8015CA08 00159808*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8015CA0C 0015980C*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8015CA10 00159810*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8015CA14 00159814*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8015CA18 00159818*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8015CA1C 0015981C*/ PPC::Runtime::ASM::blr();
}