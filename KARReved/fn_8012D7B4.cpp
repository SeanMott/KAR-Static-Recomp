//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114BA4.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_8012D434.hpp"
#include "fn_8012D434.hpp"
#include "fn_80114D9C.hpp"
#include "fn_80114E24.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"



void fn_8012D7B4(PPC::Runtime::GCContext* context)
{
/*8012D7B4 0012A5B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8012D7B8 0012A5B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8012D7BC 0012A5BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8012D7C0 0012A5C0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8012D7C4 0012A5C4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*8012D7C8 0012A5C8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8012D7CC 0012A5CC*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8012D7D0 0012A5D0*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8012D7D4 0012A5D4*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*8012D7D8 0012A5D8*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8012D7DC 0012A5DC*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x4);
/*8012D7E0 0012A5E0*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x700);
/*8012D7E4 0012A5E4*/ PPC::Runtime::ASM::bge(.L_8012DC28);
/*8012D7E8 0012A5E8*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x4);
/*8012D7EC 0012A5EC*/ PPC::Runtime::ASM::blt(.L_8012D7F4);
/*8012D7F0 0012A5F0*/ PPC::Runtime::ASM::b(.L_8012DC28);
RUNTIME_PPC_JUMP_LABEL(.L_8012D7F4, 0x8012D7F4) //this is a jump label
/*8012D7F4 0012A5F4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8012D7F8 0012A5F8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8012D7FC 0012A5FC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8012D800 0012A600*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8012D804 0012A604*/ PPC::Runtime::ASM::bl(fn_80114BA4);
/*8012D808 0012A608*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8012D80C 0012A60C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8012D810 0012A610*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*8012D814 0012A614*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8012D818 0012A618*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8012D81C 0012A61C*/ PPC::Runtime::ASM::beq(.L_8012D93C);
/*8012D820 0012A620*/ PPC::Runtime::ASM::bge(.L_8012DA48);
/*8012D824 0012A624*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8012D828 0012A628*/ PPC::Runtime::ASM::bge(.L_8012D830);
/*8012D82C 0012A62C*/ PPC::Runtime::ASM::b(.L_8012DA48);
RUNTIME_PPC_JUMP_LABEL(.L_8012D830, 0x8012D830) //this is a jump label
/*8012D830 0012A630*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E00A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8012D834 0012A634*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8012D838 0012A638*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8012D83C 0012A63C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8012D840 0012A640*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8012D844 0012A644*/ PPC::Runtime::ASM::bne(.L_8012D858);
/*8012D848 0012A648*/ PPC::Runtime::ASM::li(context->r3, lbl_805D65B8 @ Get_MemoryOffset_SDA21);
/*8012D84C 0012A64C*/ PPC::Runtime::ASM::li(context->r4, 0x316);
/*8012D850 0012A650*/ PPC::Runtime::ASM::li(context->r5, lbl_805D65C0 @ Get_MemoryOffset_SDA21);
/*8012D854 0012A654*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8012D858, 0x8012D858) //this is a jump label
/*8012D858 0012A658*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8012D85C 0012A65C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8012D860 0012A660*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*8012D864 0012A664*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8012D868 0012A668*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8012D86C 0012A66C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*8012D870 0012A670*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8012D874 0012A674*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8012D878 0012A678*/ PPC::Runtime::ASM::bne(.L_8012D8C4);
/*8012D87C 0012A67C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8012D880 0012A680*/ PPC::Runtime::ASM::beq(.L_8012D8C4);
/*8012D884 0012A684*/ PPC::Runtime::ASM::bne(.L_8012D898);
/*8012D888 0012A688*/ PPC::Runtime::ASM::li(context->r3, lbl_805D65B8 @ Get_MemoryOffset_SDA21);
/*8012D88C 0012A68C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8012D890 0012A690*/ PPC::Runtime::ASM::li(context->r5, lbl_805D65C0 @ Get_MemoryOffset_SDA21);
/*8012D894 0012A694*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8012D898, 0x8012D898) //this is a jump label
/*8012D898 0012A698*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8012D89C 0012A69C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8012D8A0 0012A6A0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8012D8A4 0012A6A4*/ PPC::Runtime::ASM::bne(.L_8012D8B4);
/*8012D8A8 0012A6A8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8012D8AC 0012A6AC*/ PPC::Runtime::ASM::beq(.L_8012D8B4);
/*8012D8B0 0012A6B0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8012D8B4, 0x8012D8B4) //this is a jump label
/*8012D8B4 0012A6B4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8012D8B8 0012A6B8*/ PPC::Runtime::ASM::bne(.L_8012D8C4);
/*8012D8BC 0012A6BC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8012D8C0 0012A6C0*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8012D8C4, 0x8012D8C4) //this is a jump label
/*8012D8C4 0012A6C4*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8012D8C8 0012A6C8*/ PPC::Runtime::ASM::bne(.L_8012D8DC);
/*8012D8CC 0012A6CC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D65B8 @ Get_MemoryOffset_SDA21);
/*8012D8D0 0012A6D0*/ PPC::Runtime::ASM::li(context->r4, 0x3b8);
/*8012D8D4 0012A6D4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D65C0 @ Get_MemoryOffset_SDA21);
/*8012D8D8 0012A6D8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8012D8DC, 0x8012D8DC) //this is a jump label
/*8012D8DC 0012A6DC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E00AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8012D8E0 0012A6E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*8012D8E4 0012A6E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8012D8E8 0012A6E8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8012D8EC 0012A6EC*/ PPC::Runtime::ASM::bne(.L_8012DB70);
/*8012D8F0 0012A6F0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8012D8F4 0012A6F4*/ PPC::Runtime::ASM::beq(.L_8012DB70);
/*8012D8F8 0012A6F8*/ PPC::Runtime::ASM::bne(.L_8012D90C);
/*8012D8FC 0012A6FC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D65B8 @ Get_MemoryOffset_SDA21);
/*8012D900 0012A700*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8012D904 0012A704*/ PPC::Runtime::ASM::li(context->r5, lbl_805D65C0 @ Get_MemoryOffset_SDA21);
/*8012D908 0012A708*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8012D90C, 0x8012D90C) //this is a jump label
/*8012D90C 0012A70C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8012D910 0012A710*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8012D914 0012A714*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8012D918 0012A718*/ PPC::Runtime::ASM::bne(.L_8012D928);
/*8012D91C 0012A71C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8012D920 0012A720*/ PPC::Runtime::ASM::beq(.L_8012D928);
/*8012D924 0012A724*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8012D928, 0x8012D928) //this is a jump label
/*8012D928 0012A728*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8012D92C 0012A72C*/ PPC::Runtime::ASM::bne(.L_8012DB70);
/*8012D930 0012A730*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8012D934 0012A734*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
/*8012D938 0012A738*/ PPC::Runtime::ASM::b(.L_8012DB70);
RUNTIME_PPC_JUMP_LABEL(.L_8012D93C, 0x8012D93C) //this is a jump label
/*8012D93C 0012A73C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E00B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8012D940 0012A740*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8012D944 0012A744*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8012D948 0012A748*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8012D94C 0012A74C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8012D950 0012A750*/ PPC::Runtime::ASM::bne(.L_8012D964);
/*8012D954 0012A754*/ PPC::Runtime::ASM::li(context->r3, lbl_805D65B8 @ Get_MemoryOffset_SDA21);
/*8012D958 0012A758*/ PPC::Runtime::ASM::li(context->r4, 0x316);
/*8012D95C 0012A75C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D65C0 @ Get_MemoryOffset_SDA21);
/*8012D960 0012A760*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8012D964, 0x8012D964) //this is a jump label
/*8012D964 0012A764*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8012D968 0012A768*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8012D96C 0012A76C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*8012D970 0012A770*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8012D974 0012A774*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8012D978 0012A778*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*8012D97C 0012A77C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8012D980 0012A780*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8012D984 0012A784*/ PPC::Runtime::ASM::bne(.L_8012D9D0);
/*8012D988 0012A788*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8012D98C 0012A78C*/ PPC::Runtime::ASM::beq(.L_8012D9D0);
/*8012D990 0012A790*/ PPC::Runtime::ASM::bne(.L_8012D9A4);
/*8012D994 0012A794*/ PPC::Runtime::ASM::li(context->r3, lbl_805D65B8 @ Get_MemoryOffset_SDA21);
/*8012D998 0012A798*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8012D99C 0012A79C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D65C0 @ Get_MemoryOffset_SDA21);
/*8012D9A0 0012A7A0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8012D9A4, 0x8012D9A4) //this is a jump label
/*8012D9A4 0012A7A4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8012D9A8 0012A7A8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8012D9AC 0012A7AC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8012D9B0 0012A7B0*/ PPC::Runtime::ASM::bne(.L_8012D9C0);
/*8012D9B4 0012A7B4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8012D9B8 0012A7B8*/ PPC::Runtime::ASM::beq(.L_8012D9C0);
/*8012D9BC 0012A7BC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8012D9C0, 0x8012D9C0) //this is a jump label
/*8012D9C0 0012A7C0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8012D9C4 0012A7C4*/ PPC::Runtime::ASM::bne(.L_8012D9D0);
/*8012D9C8 0012A7C8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8012D9CC 0012A7CC*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8012D9D0, 0x8012D9D0) //this is a jump label
/*8012D9D0 0012A7D0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8012D9D4 0012A7D4*/ PPC::Runtime::ASM::bne(.L_8012D9E8);
/*8012D9D8 0012A7D8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D65B8 @ Get_MemoryOffset_SDA21);
/*8012D9DC 0012A7DC*/ PPC::Runtime::ASM::li(context->r4, 0x3b8);
/*8012D9E0 0012A7E0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D65C0 @ Get_MemoryOffset_SDA21);
/*8012D9E4 0012A7E4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8012D9E8, 0x8012D9E8) //this is a jump label
/*8012D9E8 0012A7E8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E00B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8012D9EC 0012A7EC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*8012D9F0 0012A7F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8012D9F4 0012A7F4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8012D9F8 0012A7F8*/ PPC::Runtime::ASM::bne(.L_8012DB70);
/*8012D9FC 0012A7FC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8012DA00 0012A800*/ PPC::Runtime::ASM::beq(.L_8012DB70);
/*8012DA04 0012A804*/ PPC::Runtime::ASM::bne(.L_8012DA18);
/*8012DA08 0012A808*/ PPC::Runtime::ASM::li(context->r3, lbl_805D65B8 @ Get_MemoryOffset_SDA21);
/*8012DA0C 0012A80C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8012DA10 0012A810*/ PPC::Runtime::ASM::li(context->r5, lbl_805D65C0 @ Get_MemoryOffset_SDA21);
/*8012DA14 0012A814*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8012DA18, 0x8012DA18) //this is a jump label
/*8012DA18 0012A818*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8012DA1C 0012A81C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8012DA20 0012A820*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8012DA24 0012A824*/ PPC::Runtime::ASM::bne(.L_8012DA34);
/*8012DA28 0012A828*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8012DA2C 0012A82C*/ PPC::Runtime::ASM::beq(.L_8012DA34);
/*8012DA30 0012A830*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8012DA34, 0x8012DA34) //this is a jump label
/*8012DA34 0012A834*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8012DA38 0012A838*/ PPC::Runtime::ASM::bne(.L_8012DB70);
/*8012DA3C 0012A83C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8012DA40 0012A840*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
/*8012DA44 0012A844*/ PPC::Runtime::ASM::b(.L_8012DB70);
RUNTIME_PPC_JUMP_LABEL(.L_8012DA48, 0x8012DA48) //this is a jump label
/*8012DA48 0012A848*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E00B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8012DA4C 0012A84C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8012DA50 0012A850*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8012DA54 0012A854*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8012DA58 0012A858*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8012DA5C 0012A85C*/ PPC::Runtime::ASM::bne(.L_8012DA70);
/*8012DA60 0012A860*/ PPC::Runtime::ASM::li(context->r3, lbl_805D65B8 @ Get_MemoryOffset_SDA21);
/*8012DA64 0012A864*/ PPC::Runtime::ASM::li(context->r4, 0x316);
/*8012DA68 0012A868*/ PPC::Runtime::ASM::li(context->r5, lbl_805D65C0 @ Get_MemoryOffset_SDA21);
/*8012DA6C 0012A86C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8012DA70, 0x8012DA70) //this is a jump label
/*8012DA70 0012A870*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8012DA74 0012A874*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8012DA78 0012A878*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*8012DA7C 0012A87C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8012DA80 0012A880*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8012DA84 0012A884*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*8012DA88 0012A888*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8012DA8C 0012A88C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8012DA90 0012A890*/ PPC::Runtime::ASM::bne(.L_8012DADC);
/*8012DA94 0012A894*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8012DA98 0012A898*/ PPC::Runtime::ASM::beq(.L_8012DADC);
/*8012DA9C 0012A89C*/ PPC::Runtime::ASM::bne(.L_8012DAB0);
/*8012DAA0 0012A8A0*/ PPC::Runtime::ASM::li(context->r3, lbl_805D65B8 @ Get_MemoryOffset_SDA21);
/*8012DAA4 0012A8A4*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8012DAA8 0012A8A8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D65C0 @ Get_MemoryOffset_SDA21);
/*8012DAAC 0012A8AC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8012DAB0, 0x8012DAB0) //this is a jump label
/*8012DAB0 0012A8B0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8012DAB4 0012A8B4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8012DAB8 0012A8B8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8012DABC 0012A8BC*/ PPC::Runtime::ASM::bne(.L_8012DACC);
/*8012DAC0 0012A8C0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8012DAC4 0012A8C4*/ PPC::Runtime::ASM::beq(.L_8012DACC);
/*8012DAC8 0012A8C8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8012DACC, 0x8012DACC) //this is a jump label
/*8012DACC 0012A8CC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8012DAD0 0012A8D0*/ PPC::Runtime::ASM::bne(.L_8012DADC);
/*8012DAD4 0012A8D4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8012DAD8 0012A8D8*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8012DADC, 0x8012DADC) //this is a jump label
/*8012DADC 0012A8DC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8012DAE0 0012A8E0*/ PPC::Runtime::ASM::bne(.L_8012DAF4);
/*8012DAE4 0012A8E4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D65B8 @ Get_MemoryOffset_SDA21);
/*8012DAE8 0012A8E8*/ PPC::Runtime::ASM::li(context->r4, 0x3f1);
/*8012DAEC 0012A8EC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D65C0 @ Get_MemoryOffset_SDA21);
/*8012DAF0 0012A8F0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8012DAF4, 0x8012DAF4) //this is a jump label
/*8012DAF4 0012A8F4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E00BC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8012DAF8 0012A8F8*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8012DAFC 0012A8FC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*8012DB00 0012A900*/ PPC::Runtime::ASM::fadds(context->f31, context->f1, context->f0);
/*8012DB04 0012A904*/ PPC::Runtime::ASM::bne(.L_8012DB18);
/*8012DB08 0012A908*/ PPC::Runtime::ASM::li(context->r3, lbl_805D65B8 @ Get_MemoryOffset_SDA21);
/*8012DB0C 0012A90C*/ PPC::Runtime::ASM::li(context->r4, 0x3b8);
/*8012DB10 0012A910*/ PPC::Runtime::ASM::li(context->r5, lbl_805D65C0 @ Get_MemoryOffset_SDA21);
/*8012DB14 0012A914*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8012DB18, 0x8012DB18) //this is a jump label
/*8012DB18 0012A918*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*8012DB1C 0012A91C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8012DB20 0012A920*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8012DB24 0012A924*/ PPC::Runtime::ASM::bne(.L_8012DB70);
/*8012DB28 0012A928*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8012DB2C 0012A92C*/ PPC::Runtime::ASM::beq(.L_8012DB70);
/*8012DB30 0012A930*/ PPC::Runtime::ASM::bne(.L_8012DB44);
/*8012DB34 0012A934*/ PPC::Runtime::ASM::li(context->r3, lbl_805D65B8 @ Get_MemoryOffset_SDA21);
/*8012DB38 0012A938*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8012DB3C 0012A93C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D65C0 @ Get_MemoryOffset_SDA21);
/*8012DB40 0012A940*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8012DB44, 0x8012DB44) //this is a jump label
/*8012DB44 0012A944*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8012DB48 0012A948*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8012DB4C 0012A94C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8012DB50 0012A950*/ PPC::Runtime::ASM::bne(.L_8012DB60);
/*8012DB54 0012A954*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8012DB58 0012A958*/ PPC::Runtime::ASM::beq(.L_8012DB60);
/*8012DB5C 0012A95C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8012DB60, 0x8012DB60) //this is a jump label
/*8012DB60 0012A960*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8012DB64 0012A964*/ PPC::Runtime::ASM::bne(.L_8012DB70);
/*8012DB68 0012A968*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8012DB6C 0012A96C*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8012DB70, 0x8012DB70) //this is a jump label
/*8012DB70 0012A970*/ PPC::Runtime::ASM::lis(context->r4, fn_8012D434 @ Get_MemoryOffset_HighBit);
/*8012DB74 0012A974*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8012DB78 0012A978*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8012D434 @ Get_MemoryOffset_LowBit);
/*8012DB7C 0012A97C*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*8012DB80 0012A980*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8012DB84 0012A984*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E00A4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8012DB88 0012A988*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8012DB8C 0012A98C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8012DB90 0012A990*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8012DB94 0012A994*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8012DB98 0012A998*/ PPC::Runtime::ASM::bl(fn_80114D9C);
/*8012DB9C 0012A99C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8012DBA0 0012A9A0*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*8012DBA4 0012A9A4*/ PPC::Runtime::ASM::mr(context->r6, context->r28);
/*8012DBA8 0012A9A8*/ PPC::Runtime::ASM::li(context->r4, 0x31);
/*8012DBAC 0012A9AC*/ PPC::Runtime::ASM::bl(fn_80114E24);
/*8012DBB0 0012A9B0*/ PPC::Runtime::ASM::slwi(context->r0, context->r28, 2);
/*8012DBB4 0012A9B4*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8012DBB8 0012A9B8*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*8012DBBC 0012A9BC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E00C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8012DBC0 0012A9C0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8012DBC4 0012A9C4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8012DBC8 0012A9C8*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*8012DBCC 0012A9CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*8012DBD0 0012A9D0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8012DBD4 0012A9D4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r27));
/*8012DBD8 0012A9D8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8012DBDC 0012A9DC*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8012DBE0 0012A9E0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8012DBE4 0012A9E4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r27));
/*8012DBE8 0012A9E8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8012DBEC 0012A9EC*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8012DBF0 0012A9F0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8012DBF4 0012A9F4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r27));
/*8012DBF8 0012A9F8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8012DBFC 0012A9FC*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8012DC00 0012AA00*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8012DC04 0012AA04*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r27));
/*8012DC08 0012AA08*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8012DC0C 0012AA0C*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8012DC10 0012AA10*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8012DC14 0012AA14*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r27));
/*8012DC18 0012AA18*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8012DC1C 0012AA1C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8012DC20 0012AA20*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8012DC24 0012AA24*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_8012DC28, 0x8012DC28) //this is a jump label
/*8012DC28 0012AA28*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*8012DC2C 0012AA2C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8012DC30 0012AA30*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8012DC34 0012AA34*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8012DC38 0012AA38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8012DC3C 0012AA3C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8012DC40 0012AA40*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8012DC44 0012AA44*/ PPC::Runtime::ASM::blr();
}