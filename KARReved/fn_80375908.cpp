//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_80296264.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"



void fn_80375908(PPC::Runtime::GCContext* context)
{
/*80375908 00372708*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xe0, context->r1));
/*8037590C 0037270C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80375910 00372710*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*80375914 00372714*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*80375918 00372718*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1)0, context->qr0);
/*8037591C 0037271C*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*80375920 00372720*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1)0, context->qr0);
/*80375924 00372724*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r1));
/*80375928 00372728*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1));
/*8037592C 0037272C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4A88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375930 00372730*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80375934 00372734*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80375938 00372738*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8037593C 0037273C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80375940 00372740*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80375944 00372744*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80375948 00372748*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8037594C 0037274C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80375950 00372750*/ PPC::Runtime::ASM::beq(.L_80375E24);
/*80375954 00372754*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDA94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375958 00372758*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8037595C 0037275C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBA60 @ Get_MemoryOffset_SDA21);
/*80375960 00372760*/ PPC::Runtime::ASM::li(context->r6, lbl_805DBA58 @ Get_MemoryOffset_SDA21);
/*80375964 00372764*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80375968 00372768*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8037596C 0037276C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80375970 00372770*/ PPC::Runtime::ASM::b(.L_80375C30);
RUNTIME_PPC_JUMP_LABEL(.L_80375974, 0x80375974) //this is a jump label
/*80375974 00372774*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*80375978 00372778*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8037597C 0037277C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80375980 00372780*/ PPC::Runtime::ASM::beq(.L_80375C18);
/*80375984 00372784*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375988 00372788*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8c);
/*8037598C 0037278C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375990 00372790*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80375994 00372794*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*80375998 00372798*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x80);
/*8037599C 0037279C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*803759A0 003727A0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*803759A4 003727A4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*803759A8 003727A8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*803759AC 003727AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*803759B0 003727B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*803759B4 003727B4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*803759B8 003727B8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*803759BC 003727BC*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*803759C0 003727C0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*803759C4 003727C4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x98);
/*803759C8 003727C8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*803759CC 003727CC*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*803759D0 003727D0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*803759D4 003727D4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x8);
/*803759D8 003727D8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*803759DC 003727DC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r1));
/*803759E0 003727E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*803759E4 003727E4*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*803759E8 003727E8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*803759EC 003727EC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xa4);
/*803759F0 003727F0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r1));
/*803759F4 003727F4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*803759F8 003727F8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*803759FC 003727FC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*80375A00 00372800*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
/*80375A04 00372804*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*80375A08 00372808*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80375A0C 0037280C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375A10 00372810*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80375A14 00372814*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*80375A18 00372818*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375A1C 0037281C*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*80375A20 00372820*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f30);
/*80375A24 00372824*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375A28 00372828*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80375A2C 0037282C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f30);
/*80375A30 00372830*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375A34 00372834*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*80375A38 00372838*/ PPC::Runtime::ASM::fmuls(context->f0, context->f31, context->f0);
/*80375A3C 0037283C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80375A40 00372840*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80375A44 00372844*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*80375A48 00372848*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375A4C 0037284C*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*80375A50 00372850*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f30);
/*80375A54 00372854*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375A58 00372858*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80375A5C 0037285C*/ PPC::Runtime::ASM::fmuls(context->f3, context->f1, context->f30);
/*80375A60 00372860*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375A64 00372864*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*80375A68 00372868*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80375A6C 0037286C*/ PPC::Runtime::ASM::fmuls(context->f3, context->f1, context->f3);
/*80375A70 00372870*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f3);
/*80375A74 00372874*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80375A78 00372878*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80375A7C 0037287C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80375A80 00372880*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80375A84 00372884*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80375A88 00372888*/ PPC::Runtime::ASM::bge(.L_80375AFC);
/*80375A8C 0037288C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80375A90 00372890*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80375A94 00372894*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80375A98 00372898*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80375A9C 0037289C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80375AA0 003728A0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80375AA4 003728A4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80375AA8 003728A8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80375AAC 003728AC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f3, context->f2);
/*80375AB0 003728B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80375AB4 003728B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80375AB8 003728B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80375ABC 003728BC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80375AC0 003728C0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80375AC4 003728C4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80375AC8 003728C8*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*80375ACC 003728CC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375AD0 003728D0*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80375AD4 003728D4*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f30);
/*80375AD8 003728D8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4AD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375ADC 003728DC*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*80375AE0 003728E0*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f30);
/*80375AE4 003728E4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375AE8 003728E8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4A88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375AEC 003728EC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*80375AF0 003728F0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80375AF4 003728F4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80375AF8 003728F8*/ PPC::Runtime::ASM::b(.L_80375E24);
RUNTIME_PPC_JUMP_LABEL(.L_80375AFC, 0x80375AFC) //this is a jump label
/*80375AFC 003728FC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80375B00 00372900*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*80375B04 00372904*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375B08 00372908*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*80375B0C 0037290C*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f30);
/*80375B10 00372910*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375B14 00372914*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80375B18 00372918*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f30);
/*80375B1C 0037291C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375B20 00372920*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xa4);
/*80375B24 00372924*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80375B28 00372928*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80375B2C 0037292C*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f2);
/*80375B30 00372930*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f2);
/*80375B34 00372934*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f0);
/*80375B38 00372938*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80375B3C 0037293C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*80375B40 00372940*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*80375B44 00372944*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
/*80375B48 00372948*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*80375B4C 0037294C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375B50 00372950*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*80375B54 00372954*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*80375B58 00372958*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80375B5C 0037295C*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*80375B60 00372960*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375B64 00372964*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80375B68 00372968*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f30);
/*80375B6C 0037296C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4AD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375B70 00372970*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*80375B74 00372974*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80375B78 00372978*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f30);
/*80375B7C 0037297C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375B80 00372980*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80375B84 00372984*/ PPC::Runtime::ASM::fmuls(context->f3, context->f1, context->f0);
/*80375B88 00372988*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*80375B8C 0037298C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80375B90 00372990*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80375B94 00372994*/ PPC::Runtime::ASM::fdivs(context->f2, context->f2, context->f0);
/*80375B98 00372998*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80375B9C 0037299C*/ PPC::Runtime::ASM::fdivs(context->f2, context->f2, context->f0);
/*80375BA0 003729A0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f3);
/*80375BA4 003729A4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80375BA8 003729A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80375BAC 003729AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80375BB0 003729B0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80375BB4 003729B4*/ PPC::Runtime::ASM::fmuls(context->f31, context->f2, context->f0);
/*80375BB8 003729B8*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80375BBC 003729BC*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*80375BC0 003729C0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375BC4 003729C4*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*80375BC8 003729C8*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f30);
/*80375BCC 003729CC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4AD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375BD0 003729D0*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*80375BD4 003729D4*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f30);
/*80375BD8 003729D8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375BDC 003729DC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x68);
/*80375BE0 003729E0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80375BE4 003729E4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80375BE8 003729E8*/ PPC::Runtime::ASM::fdivs(context->f1, context->f31, context->f0);
/*80375BEC 003729EC*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80375BF0 003729F0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*80375BF4 003729F4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x14);
/*80375BF8 003729F8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*80375BFC 003729FC*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80375C00 00372A00*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*80375C04 00372A04*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x74);
/*80375C08 00372A08*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*80375C0C 00372A0C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*80375C10 00372A10*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*80375C14 00372A14*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
RUNTIME_PPC_JUMP_LABEL(.L_80375C18, 0x80375C18) //this is a jump label
/*80375C18 00372A18*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80375C1C 00372A1C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80375C20 00372A20*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*80375C24 00372A24*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80375C28 00372A28*/ PPC::Runtime::ASM::bctrl();
/*80375C2C 00372A2C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80375C30, 0x80375C30) //this is a jump label
/*80375C30 00372A30*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80375C34 00372A34*/ PPC::Runtime::ASM::bne(.L_80375974);
/*80375C38 00372A38*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x14);
/*80375C3C 00372A3C*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*80375C40 00372A40*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*80375C44 00372A44*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375C48 00372A48*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80375C4C 00372A4C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80375C50 00372A50*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375C54 00372A54*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*80375C58 00372A58*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80375C5C 00372A5C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4AD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375C60 00372A60*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*80375C64 00372A64*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f31);
/*80375C68 00372A68*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375C6C 00372A6C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*80375C70 00372A70*/ PPC::Runtime::ASM::fmuls(context->f0, context->f30, context->f0);
/*80375C74 00372A74*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80375C78 00372A78*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80375C7C 00372A7C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80375C80 00372A80*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375C84 00372A84*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*80375C88 00372A88*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80375C8C 00372A8C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4AD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375C90 00372A90*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*80375C94 00372A94*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f31);
/*80375C98 00372A98*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375C9C 00372A9C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x14);
/*80375CA0 00372AA0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80375CA4 00372AA4*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80375CA8 00372AA8*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f2);
/*80375CAC 00372AAC*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f2);
/*80375CB0 00372AB0*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f0);
/*80375CB4 00372AB4*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80375CB8 00372AB8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375CBC 00372ABC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80375CC0 00372AC0*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80375CC4 00372AC4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375CC8 00372AC8*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80375CCC 00372ACC*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80375CD0 00372AD0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4AD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375CD4 00372AD4*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*80375CD8 00372AD8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f31);
/*80375CDC 00372ADC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375CE0 00372AE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80375CE4 00372AE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80375CE8 00372AE8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*80375CEC 00372AEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80375CF0 00372AF0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80375CF4 00372AF4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80375CF8 00372AF8*/ PPC::Runtime::ASM::fmuls(context->f4, context->f1, context->f0);
/*80375CFC 00372AFC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80375D00 00372B00*/ PPC::Runtime::ASM::fmuls(context->f3, context->f2, context->f0);
/*80375D04 00372B04*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80375D08 00372B08*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80375D0C 00372B0C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80375D10 00372B10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80375D14 00372B14*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f0);
/*80375D18 00372B18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80375D1C 00372B1C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80375D20 00372B20*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80375D24 00372B24*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80375D28 00372B28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80375D2C 00372B2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80375D30 00372B30*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80375D34 00372B34*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80375D38 00372B38*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80375D3C 00372B3C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80375D40 00372B40*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80375D44 00372B44*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375D48 00372B48*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*80375D4C 00372B4C*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80375D50 00372B50*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4AD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375D54 00372B54*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*80375D58 00372B58*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f31);
/*80375D5C 00372B5C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375D60 00372B60*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x14);
/*80375D64 00372B64*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80375D68 00372B68*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80375D6C 00372B6C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*80375D70 00372B70*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f1);
/*80375D74 00372B74*/ PPC::Runtime::ASM::bl(fn_PSVECScale);
/*80375D78 00372B78*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8);
/*80375D7C 00372B7C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x14);
/*80375D80 00372B80*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80375D84 00372B84*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*80375D88 00372B88*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4A88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375D8C 00372B8C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375D90 00372B90*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80375D94 00372B94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80375D98 00372B98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80375D9C 00372B9C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80375DA0 00372BA0*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80375DA4 00372BA4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375DA8 00372BA8*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80375DAC 00372BAC*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80375DB0 00372BB0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4AD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375DB4 00372BB4*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*80375DB8 00372BB8*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f31);
/*80375DBC 00372BBC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375DC0 00372BC0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80375DC4 00372BC4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80375DC8 00372BC8*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f2);
/*80375DCC 00372BCC*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f2);
/*80375DD0 00372BD0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80375DD4 00372BD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80375DD8 00372BD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80375DDC 00372BDC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80375DE0 00372BE0*/ PPC::Runtime::ASM::fsubs(context->f2, context->f3, context->f2);
/*80375DE4 00372BE4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80375DE8 00372BE8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80375DEC 00372BEC*/ PPC::Runtime::ASM::bge(.L_80375E24);
/*80375DF0 00372BF0*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80375DF4 00372BF4*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80375DF8 00372BF8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375DFC 00372BFC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*80375E00 00372C00*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80375E04 00372C04*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4AD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375E08 00372C08*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*80375E0C 00372C0C*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f31);
/*80375E10 00372C10*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4A90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375E14 00372C14*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4A88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80375E18 00372C18*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*80375E1C 00372C1C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80375E20 00372C20*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80375E24, 0x80375E24) //this is a jump label
/*80375E24 00372C24*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1)0, context->qr0);
/*80375E28 00372C28*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*80375E2C 00372C2C*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1)0, context->qr0);
/*80375E30 00372C30*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*80375E34 00372C34*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r1));
/*80375E38 00372C38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*80375E3C 00372C3C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1));
/*80375E40 00372C40*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80375E44 00372C44*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xe0);
/*80375E48 00372C48*/ PPC::Runtime::ASM::blr();
}