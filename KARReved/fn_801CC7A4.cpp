//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80245F70.hpp"
#include "fn_802460D4.hpp"
#include "fn_8024625C.hpp"
#include "fn_801CCAB8.hpp"
#include "fn_801CCAC8.hpp"
#include "fn_801CCAC8.hpp"
#include "fn_800D1860.hpp"
#include "fn_800CEC28.hpp"
#include "fn_800CEC80.hpp"
#include "fn_800CECD4.hpp"
#include "fn_800CECA8.hpp"
#include "fn_801CCAD8.hpp"
#include "fn_801CCC9C.hpp"



void fn_801CC7A4(PPC::Runtime::GCContext* context)
{
/*801CC7A4 001C95A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801CC7A8 001C95A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801CC7AC 001C95AC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801CC7B0 001C95B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801CC7B4 001C95B4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801CC7B8 001C95B8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801CC7BC 001C95BC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x3e8);
/*801CC7C0 001C95C0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801CC7C4 001C95C4*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x43c);
/*801CC7C8 001C95C8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801CC7CC 001C95CC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801CC7D0 001C95D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r3));
/*801CC7D4 001C95D4*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*801CC7D8 001C95D8*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0x448);
/*801CC7DC 001C95DC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46c, context->r31));
/*801CC7E0 001C95E0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*801CC7E4 001C95E4*/ PPC::Runtime::ASM::bl(fn_80245F70);
/*801CC7E8 001C95E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801CC7EC 001C95EC*/ PPC::Runtime::ASM::bl(fn_802460D4);
/*801CC7F0 001C95F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801CC7F4 001C95F4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x3e8);
/*801CC7F8 001C95F8*/ PPC::Runtime::ASM::bl(fn_8024625C);
/*801CC7FC 001C95FC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CC800 001C9600*/ PPC::Runtime::ASM::bl(fn_801CCAB8);
/*801CC804 001C9604*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801CC808 001C9608*/ PPC::Runtime::ASM::beq(.L_801CC90C);
/*801CC80C 001C960C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CC810 001C9610*/ PPC::Runtime::ASM::bl(fn_801CCAC8);
/*801CC814 001C9614*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*801CC818 001C9618*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/* 801CC81C 001C961C  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*801CC820 001C9620*/ PPC::Runtime::ASM::bne(.L_801CC838);
/*801CC824 001C9624*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B0A30 @ Get_MemoryOffset_HighBit);
/*801CC828 001C9628*/ PPC::Runtime::ASM::li(context->r3, String_ "mplib." 3 @ Get_MemoryOffset_SDA21);
/*801CC82C 001C962C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804B0A30 @ Get_MemoryOffset_LowBit);
/*801CC830 001C9630*/ PPC::Runtime::ASM::li(context->r4, 0x94);
/*801CC834 001C9634*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801CC838, 0x801CC838) //this is a jump label
/*801CC838 001C9638*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*801CC83C 001C963C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CC840 001C9640*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801CC844 001C9644*/ PPC::Runtime::ASM::bl(fn_801CCAC8);
/*801CC848 001C9648*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*801CC84C 001C964C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/* 801CC850 001C9650  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*801CC854 001C9654*/ PPC::Runtime::ASM::bne(.L_801CC86C);
/*801CC858 001C9658*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B0A30 @ Get_MemoryOffset_HighBit);
/*801CC85C 001C965C*/ PPC::Runtime::ASM::li(context->r3, String_ "mplib." 3 @ Get_MemoryOffset_SDA21);
/*801CC860 001C9660*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804B0A30 @ Get_MemoryOffset_LowBit);
/*801CC864 001C9664*/ PPC::Runtime::ASM::li(context->r4, 0xa9);
/*801CC868 001C9668*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801CC86C, 0x801CC86C) //this is a jump label
/*801CC86C 001C966C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*801CC870 001C9670*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801CC874 001C9674*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/*801CC878 001C9678*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 6, 25, 25);
/*801CC87C 001C967C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*801CC880 001C9680*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801CC884 001C9684*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*801CC888 001C9688*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x738);
/*801CC88C 001C968C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r5));
/*801CC890 001C9690*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801CC894 001C9694*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/*801CC898 001C9698*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x714, context->r31));
/*801CC89C 001C969C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x718, context->r31));
/*801CC8A0 001C96A0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x71c, context->r31));
/*801CC8A4 001C96A4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CC8A8 001C96A8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801CC8AC 001C96AC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x720, context->r31));
/*801CC8B0 001C96B0*/ PPC::Runtime::ASM::bl(fn_800D1860);
/*801CC8B4 001C96B4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801CC8B8 001C96B8*/ PPC::Runtime::ASM::bl(fn_800CEC28);
/*801CC8BC 001C96BC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x734, context->r31));
/*801CC8C0 001C96C0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801CC8C4 001C96C4*/ PPC::Runtime::ASM::bl(fn_800CEC80);
/*801CC8C8 001C96C8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x744, context->r31));
/*801CC8CC 001C96CC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801CC8D0 001C96D0*/ PPC::Runtime::ASM::bl(fn_800CECD4);
/*801CC8D4 001C96D4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x748, context->r31));
/*801CC8D8 001C96D8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801CC8DC 001C96DC*/ PPC::Runtime::ASM::bl(fn_800CECA8);
/*801CC8E0 001C96E0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74c, context->r31));
/*801CC8E4 001C96E4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CC8E8 001C96E8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*801CC8EC 001C96EC*/ PPC::Runtime::ASM::bl(fn_801CCAD8);
/*801CC8F0 001C96F0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CC8F4 001C96F4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*801CC8F8 001C96F8*/ PPC::Runtime::ASM::bl(fn_801CCC9C);
/*801CC8FC 001C96FC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801CC900 001C9700*/ PPC::Runtime::ASM::beq(.L_801CC928);
/*801CC904 001C9704*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801CC908 001C9708*/ PPC::Runtime::ASM::b(.L_801CC92C);
RUNTIME_PPC_JUMP_LABEL(.L_801CC90C, 0x801CC90C) //this is a jump label
/*801CC90C 001C970C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/*801CC910 001C9710*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801CC914 001C9714*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 6, 25, 25);
/*801CC918 001C9718*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/*801CC91C 001C971C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/*801CC920 001C9720*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 5, 26, 26);
/*801CC924 001C9724*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801CC928, 0x801CC928) //this is a jump label
/*801CC928 001C9728*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801CC92C, 0x801CC92C) //this is a jump label
/*801CC92C 001C972C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801CC930 001C9730*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801CC934 001C9734*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801CC938 001C9738*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801CC93C 001C973C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801CC940 001C9740*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801CC944 001C9744*/ PPC::Runtime::ASM::blr();
}